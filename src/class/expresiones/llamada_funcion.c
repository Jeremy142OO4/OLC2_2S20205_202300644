#include <stdio.h>
#include <string.h>
#include "llamada_funcion.h"

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
    //struct entorno* nuevoEntorno = nuevo_entorno(e);
    //struct ASTNode* parametrosNodo = node->left;
    //struct ASTNode* definicionParametros = func->parametros;
}