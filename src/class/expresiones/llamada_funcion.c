#include <stdio.h>
#include <string.h>
#include "llamada_funcion.h"

static int contar_parametros(struct ASTNode* parametros) {
    int n = 0;
    while (parametros) {
        n++;
        parametros = parametros->right; 
    }
    return n;
}



TipoRetorno ejecutarLlamadaFuncion(struct ASTNode* node, struct entorno* e) {
    TipoRetorno res;
    res.valor = NULL;
    res.tipo = TIPO_NULO;
    res.control = CTRL_NORMAL;

    if (!node || !node->value) {
        printf("Error: llamada de función sin nombre\n");
        return res;
    }
    struct funcion* func = getFunc(e, node->value);
    if (!func) {
        printf("Error: función '%s' no definida\n", node->value);
        return res;
    }
    if (contar_parametros(node->left) != func->num_parametros) {
        printf("Error: número de parámetros incorrecto en llamada a '%s'\n", node->value);
        return res;
    }
    struct entorno* entorno_funcion = nuevo_entorno(e);
    struct ASTNode* parametros = func->parametros;
    struct ASTNode* valores = node->left;
    if (parametros && valores) {
        ejecutar(parametros,entorno_funcion);
        while (valores && parametros) {

            TipoRetorno valor = ejecutar(valores->left, e);

            struct symbol *s = getVar(entorno_funcion, parametros->value);
            if(!s) {
                printf("Error: parámetro '%s' no declarado en función '%s'\n", parametros->value, func->id);
                return res;
            }
            if (s->tipo != valor.tipo) {
                printf("Error: tipo de parámetro '%s' incorrecto en función '%s'\n", parametros->value, func->id);

                return res;
            }
            s->valor = valor.valor;
            s->tipo  = valor.tipo;
            parametros = parametros->right;
            valores = valores->right;
        }
    }
    
    struct ASTNode* instrucciones = func->instrucciones;
    if (instrucciones) {
        res = ejecutar(instrucciones, entorno_funcion);
        if (res.control == CTRL_RETURN) {
            if (res.tipo != func->retorno) {
                printf("Error: tipo de retorno incorrecto en función '%s'\n", func->id);
                res.valor = NULL;
                res.tipo = TIPO_NULO;   
                res.control = CTRL_NORMAL;
                return res;
            }
            
        }
        
        res.control = CTRL_NORMAL;
        
        }
    return res;

}