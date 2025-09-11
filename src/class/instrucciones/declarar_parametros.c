#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "declarar_parametros.h"

static TipoRetorno declarar_parametros(const char* tipo) {
    TipoRetorno resultado; 
    resultado.valor = NULL; 
    resultado.tipo = TIPO_NULO ;
    resultado.control = CTRL_NORMAL;
    if (!tipo) return resultado;

    if (strcmp(tipo, "int") == 0) {
        int* p = malloc(sizeof(int));
        *p = 0;
        resultado.valor = p; 
        resultado.tipo = TIPO_ENTERO;
    }
    else if (strcmp(tipo, "float") == 0) {
        float* p = malloc(sizeof(float));
        *p = 0.0f;
        resultado.valor = p; 
        resultado.tipo = TIPO_DECIMAL;
    }
    else if (strcmp(tipo, "string") == 0) {
        resultado.valor = strdup("null");
        resultado.tipo = TIPO_CADENA;
    }
    else if (strcmp(tipo, "bool") == 0) {
        int* p = malloc(sizeof(int));
        *p = 0;
        resultado.valor = p; 
        resultado.tipo = TIPO_BOOLEANO;
    }
    else if (strcmp(tipo, "char") == 0) {
        char* p = malloc(sizeof(char));
        *p = '\0';
        resultado.valor = p; 
        resultado.tipo = TIPO_CHAR;
    }

    return resultado;
}


void ejecutarDeclararParametros(struct ASTNode* node, struct entorno* e) {
    if (!node || !node->value) {
        printf("Error: declaración sin identificador\n");
        return;
    }

    struct symbol* s = malloc(sizeof(struct symbol));
    

    s->id = strdup(node->value);
    
    s->siguiente = NULL;
    s->constante = 0;
    const char* tipo =  node->left->value;
    TipoRetorno def = declarar_parametros(tipo);

    s->valor = def.valor;
    s->tipo  = def.tipo;

    setVar(e, s);
    if (node->right) {
        ejecutarDeclararParametros(node->right, e);
    }
}
