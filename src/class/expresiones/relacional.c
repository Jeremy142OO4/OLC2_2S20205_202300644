#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "relacional.h"

TipoRetorno ejecutarRelacional(const char* op, TipoRetorno a, TipoRetorno b) {
    TipoRetorno res;
    res.valor = NULL;
    res.tipo = TIPO_NULO;
    res.control = CTRL_NORMAL;

    int *val = malloc(sizeof(int));
    if (!val) {
        fprintf(stderr, "Error: out of memory en ejecutarRelacional\n");
        return res;
    }

    if (strcmp(op, "==") == 0) {
        if (a.tipo == b.tipo) {
            if (a.tipo == TIPO_ENTERO) {
                *val = (*(int*)a.valor == *(int*)b.valor);
            } else if (a.tipo == TIPO_DECIMAL) {
                *val = (*(float*)a.valor == *(float*)b.valor);
            } else if (a.tipo == TIPO_CADENA) {
                *val = (strcmp((char*)a.valor, (char*)b.valor) == 0);
            } else if (a.tipo == TIPO_BOOLEANO) {
                *val = (*(int*)a.valor == *(int*)b.valor);
            } else if (a.tipo == TIPO_CHAR) {
                *val = (*(char*)a.valor == *(char*)b.valor);
            } else {
                *val = 0;
            }
        } else {
            *val = 0; 
        }
    }
    else if (strcmp(op, "!=") == 0) {
        if (a.tipo == b.tipo) {
            if (a.tipo == TIPO_ENTERO) {
                *val = (*(int*)a.valor != *(int*)b.valor);
            } else if (a.tipo == TIPO_DECIMAL) {
                *val = (*(float*)a.valor != *(float*)b.valor);
            } else if (a.tipo == TIPO_CADENA) {
                *val = (strcmp((char*)a.valor, (char*)b.valor) != 0);
            } else if (a.tipo == TIPO_BOOLEANO) {
                *val = (*(int*)a.valor != *(int*)b.valor);
            } else if (a.tipo == TIPO_CHAR) {
                *val = (*(char*)a.valor != *(char*)b.valor);
            } else {
                *val = 1;
            }
        } else {
            *val = 1; 
        }
    }
    else if (strcmp(op, "<") == 0) {
        if (a.tipo == TIPO_ENTERO && b.tipo == TIPO_ENTERO) {
            *val = (*(int*)a.valor < *(int*)b.valor);
        } else {
            float num1 = (a.tipo == TIPO_ENTERO) ? *(int*)a.valor : *(float*)a.valor;
            float num2 = (b.tipo == TIPO_ENTERO) ? *(int*)b.valor : *(float*)b.valor;
            *val = (num1 < num2);
        }
    }
    else if (strcmp(op, "<=") == 0) {
        if (a.tipo == TIPO_ENTERO && b.tipo == TIPO_ENTERO) {
            *val = (*(int*)a.valor <= *(int*)b.valor);
        } else {
            float num1 = (a.tipo == TIPO_ENTERO) ? *(int*)a.valor : *(float*)a.valor;
            float num2 = (b.tipo == TIPO_ENTERO) ? *(int*)b.valor : *(float*)b.valor;
            *val = (num1 <= num2);
        }
    }
    else if (strcmp(op, ">") == 0) {
        if (a.tipo == TIPO_ENTERO && b.tipo == TIPO_ENTERO) {
            *val = (*(int*)a.valor > *(int*)b.valor);
        } else {
            float num1 = (a.tipo == TIPO_ENTERO) ? *(int*)a.valor : *(float*)a.valor;
            float num2 = (b.tipo == TIPO_ENTERO) ? *(int*)b.valor : *(float*)b.valor;
            *val = (num1 > num2);
        }
    }
    else if (strcmp(op, ">=") == 0) {
        if (a.tipo == TIPO_ENTERO && b.tipo == TIPO_ENTERO) {
            *val = (*(int*)a.valor >= *(int*)b.valor);
        } else {
            float num1 = (a.tipo == TIPO_ENTERO) ? *(int*)a.valor : *(float*)a.valor;
            float num2 = (b.tipo == TIPO_ENTERO) ? *(int*)b.valor : *(float*)b.valor;
            *val = (num1 >= num2);
        }
    }
    else {
        printf("Error: operador relacional no soportado '%s'\n", op);
        free(val);
        return res;
    }

    res.valor = val;
    res.tipo = TIPO_BOOLEANO;
    return res;
}