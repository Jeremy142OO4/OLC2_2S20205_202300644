#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "casteo.h"

TipoRetorno ejecutarCasteo(const char* tipoDestino, TipoRetorno valor) {
    TipoRetorno res;
    res.valor = NULL;
    res.tipo  = TIPO_NULO;
    res.control = CTRL_NORMAL;

    if (!tipoDestino) {
        printf("Error: tipo destino nulo en casteo\n");
        return res;
    }

    if (strcmp(tipoDestino, "int") == 0) {
        int *p = (int*)malloc(sizeof(int));
        if (valor.tipo == TIPO_DECIMAL)
            *p = (int)(*(float*)valor.valor);
        else if (valor.tipo == TIPO_CHAR)
            *p = (int)(*(char*)valor.valor);
        else if (valor.tipo == TIPO_ENTERO)
            *p = *(int*)valor.valor;
        res.valor = p;
        res.tipo  = TIPO_ENTERO;
    }
    else if (strcmp(tipoDestino, "float") == 0 || strcmp(tipoDestino, "double") == 0) {
        float *p = (float*)malloc(sizeof(float));
        if (valor.tipo == TIPO_ENTERO)
            *p = (float)(*(int*)valor.valor);
        else if (valor.tipo == TIPO_CHAR)
            *p = (float)(*(char*)valor.valor);
        else if (valor.tipo == TIPO_DECIMAL)
            *p = *(float*)valor.valor;
        res.valor = p;
        res.tipo  = TIPO_DECIMAL;
    }
    else if (strcmp(tipoDestino, "char") == 0) {
        char *p = (char*)malloc(sizeof(char));
        if (valor.tipo == TIPO_ENTERO)
            *p = (char)(*(int*)valor.valor);
        else if (valor.tipo == TIPO_DECIMAL)
            *p = (char)(*(float*)valor.valor);
        else if (valor.tipo == TIPO_CHAR)
            *p = *(char*)valor.valor;
        res.valor = p;
        res.tipo  = TIPO_CHAR;
    }
    else {
        printf("Error: tipo de casteo no soportado: %s\n", tipoDestino);
    }

    return res;
}
