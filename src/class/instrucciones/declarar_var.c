#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "declarar_var.h"

static TipoRetorno declarar(const char* t) {
    TipoRetorno r; r.valor = NULL; r.tipo = TIPO_NULO;
    if (!t) return r;

    if (strcmp(t, "int") == 0) {
        int* p = malloc(sizeof(int));
        *p = 0;
        r.valor = p; r.tipo = TIPO_ENTERO;
    }
    else if (strcmp(t, "float") == 0) {
        float* p = malloc(sizeof(float));
        *p = 0.0f;
        r.valor = p; r.tipo = TIPO_DECIMAL;
    }
    else if (strcmp(t, "string") == 0) {
        r.valor = strdup("null");
        r.tipo = TIPO_CADENA;
    }
    else if (strcmp(t, "bool") == 0) {
        int* p = malloc(sizeof(int));
        *p = 0;
        r.valor = p; r.tipo = TIPO_BOOLEANO;
    }
    else if (strcmp(t, "char") == 0) {
        char* p = malloc(sizeof(char));
        *p = '\0';
        r.valor = p; r.tipo = TIPO_CHAR;
    }

    return r;
}


void ejecutarDeclarar(struct ASTNode* node, struct entorno* e, int es_constante) {
    if (!node || !node->value) {
        printf("Error: declaración sin identificador\n");
        return;
    }

    struct symbol* s = malloc(sizeof(struct symbol));
    if (!s) {
        printf("Error: sin memoria para símbolo\n");
        return;
    }

    s->id = strdup(node->value);
    s->siguiente = NULL;
    s->constante = es_constante;

    if (node->right) {
        TipoRetorno val = ejecutar(node->right, e);
        s->valor = val.valor;
        s->tipo  = val.tipo;
        setVar(e, s);
    } else {
        if (es_constante) {
            printf("Error: una constante debe inicializarse al declararse (%s)\n", node->value);
            free(s);
            return;
        }

        const char* t = (node->left && node->left->value) ? node->left->value : NULL;
        TipoRetorno def = declarar(t);

        s->valor = def.valor;
        s->tipo  = def.tipo;
        setVar(e, s);
    }
}
