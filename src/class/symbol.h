#ifndef SIMBOLO_H
#define SIMBOLO_H
#include <stdbool.h>
#include "tipos.h"   

typedef struct symbol {
    char* id;
    void* valor;
    Tipo tipo;
    struct symbol* siguiente; 
    int constante;
} symbol;

#endif
