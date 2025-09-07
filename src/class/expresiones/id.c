#include <stdio.h>
#include <string.h>
#include "id.h"

TipoRetorno ejecutarId(struct entorno* e, const char* nombre) {
    TipoRetorno res;
    res.valor = NULL;
    res.tipo = TIPO_NULO;

    struct symbol* s = getVar(e, nombre);
    if (s) {
        res.valor = s->valor;
        res.tipo = s->tipo;
    } else {
        printf("Error: variable '%s' no definida\n", nombre);
    }

    return res;
}
