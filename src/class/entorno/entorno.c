#include "entorno.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

unsigned int hash(const char* str) {
    unsigned int h = 0;
    while (*str) h = (h << 5) + *str++;
    return h % HASH_SIZE;
}



entorno* nuevo_entorno(entorno* anterior) {
    entorno* e = malloc(sizeof(entorno));
    e->anterior = anterior;
    for (int i = 0; i < HASH_SIZE; i++) { e->tabla[i]=NULL; e->funs[i]=NULL; }
    return e;
}

void setVar(entorno* entorno, symbol* simbolo) {
    unsigned int h = hash(simbolo->id);
    symbol* actual = entorno->tabla[h];
    while (actual) {
        if (strcmp(actual->id, simbolo->id) == 0) {
            actual->valor = simbolo->valor;
            actual->tipo = simbolo->tipo;
            return;
        }
        actual = actual->siguiente;
    }

    simbolo->siguiente = entorno->tabla[h];
    entorno->tabla[h] = simbolo;
}

symbol* getVar(entorno* entorno, const char* id) {
    while (entorno) {
        unsigned int h = hash(id);
        symbol* actual = entorno->tabla[h];
        while (actual) {
            if (strcmp(actual->id, id) == 0) {
                return actual;
            }
            actual = actual->siguiente;
        }
        entorno = entorno->anterior; 
    }
    return NULL;
}

void setFunc(entorno* entorno, funcion* f) {
    if (!entorno || !f || !f->id) return;
    unsigned int h = hash(f->id);
    funcion* actual = entorno->funs[h];

    while (actual) {
        if (strcmp(actual->id, f->id) == 0) {
            actual->retorno = f->retorno;
            actual->parametros  = f->parametros;
            actual->num_parametros  = f->num_parametros;
            actual->instrucciones  = f->instrucciones;
            return;
        }
        actual = actual->siguiente;
    }

    f->siguiente = entorno->funs[h];
    entorno->funs[h] = f;
}

funcion* getFunc(entorno* entorno, const char* id) {
    while (entorno) {
        unsigned int h = hash(id);
        funcion* actual = entorno->funs[h];
        while (actual) {
            if (strcmp(actual->id, id) == 0) {
                return actual;
            }
            actual = actual->siguiente;
        }
        entorno = entorno->anterior; 
    }
    return NULL;
}