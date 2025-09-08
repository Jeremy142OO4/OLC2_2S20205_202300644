#ifndef ENTORNO_H
#define ENTORNO_H

#include "symbol.h"

#define HASH_SIZE 128

typedef struct entorno {
    struct entorno* anterior; 
    symbol* tabla[HASH_SIZE]; // HashMap
} entorno;

entorno* nuevo_entorno(entorno* anterior);
void setVar(entorno* entorno, symbol* simbolo);
symbol* getVar(entorno* entorno, const char* id);

#endif
