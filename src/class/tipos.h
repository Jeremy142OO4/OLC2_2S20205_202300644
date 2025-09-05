
#ifndef TIPOS_H
#define TIPOS_H

typedef enum {
    TIPO_NULO,
    TIPO_ENTERO,
    TIPO_DECIMAL,
    TIPO_CADENA,
    TIPO_BOOLEANO,
    TIPO_CHAR
} Tipo;

typedef struct {
    void* valor;
    Tipo tipo;
} TipoRetorno;

#endif

