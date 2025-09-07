#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "aritmetico.h"

TipoRetorno ejecutarAritmetico(const char* op, TipoRetorno a, TipoRetorno b) {
    TipoRetorno res;
    res.valor = NULL;
    res.tipo = TIPO_NULO;

    

    if (strcmp(op, "+") == 0) {
        if (a.tipo == TIPO_ENTERO && b.tipo == TIPO_ENTERO) {
            int* val = malloc(sizeof(int));
            *val = *(int*)a.valor + *(int*)b.valor;
            res.tipo = TIPO_ENTERO; res.valor = val;
        } else {
            float num1 = (a.tipo == TIPO_ENTERO) ? *(int*)a.valor : *(float*)a.valor;
            float num2 = (b.tipo == TIPO_ENTERO) ? *(int*)b.valor : *(float*)b.valor;
            float* val = malloc(sizeof(float));
            *val = num1 + num2;
            res.tipo = TIPO_DECIMAL; res.valor = val;
        }
    }
    else if (strcmp(op, "-") == 0) {
        if (a.tipo == TIPO_ENTERO && b.tipo == TIPO_ENTERO) {
            int* val = malloc(sizeof(int));
            *val = *(int*)a.valor - *(int*)b.valor;
            res.tipo = TIPO_ENTERO; res.valor = val;
        } else {
            float num1 = (a.tipo == TIPO_ENTERO) ? *(int*)a.valor : *(float*)a.valor;
            float num2 = (b.tipo == TIPO_ENTERO) ? *(int*)b.valor : *(float*)b.valor;
            float* val = malloc(sizeof(float));
            *val = num1 - num2;
            res.tipo = TIPO_DECIMAL; res.valor = val;
        }
    }
    else if (strcmp(op, "*") == 0) {
        if (a.tipo == TIPO_ENTERO && b.tipo == TIPO_ENTERO) {
            int* val = malloc(sizeof(int));
            *val = *(int*)a.valor * *(int*)b.valor;
            res.tipo = TIPO_ENTERO; res.valor = val;
        } else {
            float num1 = (a.tipo == TIPO_ENTERO) ? *(int*)a.valor : *(float*)a.valor;
            float num2 = (b.tipo == TIPO_ENTERO) ? *(int*)b.valor : *(float*)b.valor;
            float* val = malloc(sizeof(float));
            *val = num1 * num2;
            res.tipo = TIPO_DECIMAL; res.valor = val;
        }
    }
    else if (strcmp(op, "/") == 0) {
        float num1 = (a.tipo == TIPO_ENTERO) ? *(int*)a.valor : *(float*)a.valor;
        float num2 = (b.tipo == TIPO_ENTERO) ? *(int*)b.valor : *(float*)b.valor;
        if (num2 == 0.0f) {
            printf("Error: División por cero\n");
            return res;
        }
        if (a.tipo == TIPO_ENTERO && b.tipo == TIPO_ENTERO) {
            int* val = malloc(sizeof(int));
            *val = *(int*)a.valor / *(int*)b.valor;
            res.tipo = TIPO_ENTERO; res.valor = val;
        } else {
            float* val = malloc(sizeof(float));
            *val = num1 / num2;
            res.tipo = TIPO_DECIMAL; res.valor = val;
        }
    }
    else if (strcmp(op, "%") == 0) {
        if (a.tipo == TIPO_ENTERO && b.tipo == TIPO_ENTERO) {
            int divisor = *(int*)b.valor;
            if (divisor == 0) {
                printf("Error: Módulo por cero\n");
                return res;
            }
            int* val = malloc(sizeof(int));
            *val = *(int*)a.valor % divisor;
            res.tipo = TIPO_ENTERO; res.valor = val;
        } else {
            float num1 = (a.tipo == TIPO_ENTERO) ? *(int*)a.valor : *(float*)a.valor;
            float num2 = (b.tipo == TIPO_ENTERO) ? *(int*)b.valor : *(float*)b.valor;
            if (num2 == 0.0f) {
                printf("Error: Módulo por cero\n");
                return res;
            }
            float* val = malloc(sizeof(float));
            *val = fmod(num1, num2);
            res.tipo = TIPO_DECIMAL; res.valor = val;
        }
    }
    else if (strcmp(op, "^") == 0) {
        float num1 = (a.tipo == TIPO_ENTERO) ? *(int*)a.valor : *(float*)a.valor;
        float num2 = (b.tipo == TIPO_ENTERO) ? *(int*)b.valor : *(float*)b.valor;
        float* val = malloc(sizeof(float));
        *val = powf(num1, num2);
        res.tipo = TIPO_DECIMAL; res.valor = val;
    }
    else {
        printf("Error: Operador no reconocido '%s'\n", op);
    }

    return res;
}
