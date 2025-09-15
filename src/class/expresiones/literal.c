#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>  
#include "literal.h"
#include <math.h> 

TipoRetorno ejecutarLiteral(const char* value) {
    TipoRetorno res;
    res.valor = NULL;
    res.tipo = TIPO_NULO;
    res.control = CTRL_NORMAL;

    if (isdigit(value[0])) {
        if (strchr(value, '.') != NULL) {
            
            size_t len = strlen(value);

        // ¿termina en 'f' o 'F'? => float
        if (len > 0 && (value[len - 1] == 'f' || value[len - 1] == 'F')) {
            char tmp[64];
            strncpy(tmp, value, len - 1); // copia sin la 'f'
            tmp[len - 1] = '\0';

            float *val = malloc(sizeof(float));
            if (!val) { fprintf(stderr, "OOM\n"); return res; }
            *val = strtof(tmp, NULL);   // parsear como float
            *val = roundf(*val * 100.0f) / 100.0f; 
            res.valor = val;
            res.tipo = TIPO_DECIMAL;
        } else {
            double *val = malloc(sizeof(double));
            if (!val) { fprintf(stderr, "OOM\n"); return res; }
            *val = strtod(value, NULL);   
            res.valor = val;
            res.tipo = TIPO_DOUBLE;
        }
        } else {

            int *val = malloc(sizeof(int));
            if (!val) { fprintf(stderr, "OOM\n"); return res; }
            *val = atoi(value);
            res.valor = val;
            res.tipo = TIPO_ENTERO;
        }
    }
    else if (value[0] == '"' && value[strlen(value) - 1] == '"') {

        size_t len = strlen(value) - 2;
        char *val = (char*)malloc(len + 1);
        if (!val) { fprintf(stderr, "OOM\n"); return res; }
        strncpy(val, value + 1, len);
        val[len] = '\0';
        res.valor = val;
        res.tipo = TIPO_CADENA;
    }
    else if (strcmp(value, "true") == 0 || strcmp(value, "false") == 0) {

        int *val = malloc(sizeof(int));
        if (!val) { fprintf(stderr, "OOM\n"); return res; }
        *val = (strcmp(value, "true") == 0) ? 1 : 0;
        res.valor = val;
        res.tipo = TIPO_BOOLEANO;
    }
    else {
        printf("Error: literal no soportado: %s\n", value);
    }

    return res;
}
