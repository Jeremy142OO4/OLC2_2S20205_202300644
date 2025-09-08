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
    for (int i = 0; i < HASH_SIZE; i++) e->tabla[i] = NULL;
    return e;
}

void setVar(entorno* entorno, symbol* simbolo) {
    unsigned int h = hash(simbolo->id);
    symbol* actual = entorno->tabla[h];
    printf("Setting variable '%s' in entorno...\n", simbolo->id);
    printf("Tipo: %d\n", simbolo->tipo);
    //printf("Valor: %d", simbolo->valor); ;
    // verificar si ya existe
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
            printf("Buscando '%s' en entorno...\n", id);
            if (strcmp(actual->id, id) == 0) {
                printf("Variable '%s' encontrada.\n", id);
                printf("Tipo: %d\n", actual->tipo);
                printf("Valor: " ) ;
                if (actual->tipo == TIPO_ENTERO) {
                    printf("%d\n", *((int*)actual->valor));
                } else if (actual->tipo == TIPO_DECIMAL) {
                    printf("%f\n", *((float*)actual->valor));
                } else if (actual->tipo == TIPO_CADENA) {
                    printf("%s\n", (char*)actual->valor);
                } else {    
                    printf("NULO\n");
                }
                return actual;
            }
            actual = actual->siguiente;
        }
        entorno = entorno->anterior; 
    }
    return NULL;
}
