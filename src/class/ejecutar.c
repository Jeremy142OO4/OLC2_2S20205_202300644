#include "ejecutar.h"
#include "entorno.h"
#include "symbol.h"
// #include "Aritmeticos.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

TipoRetorno ejecutar(struct ASTNode *node, struct entorno *entorno)
{
    TipoRetorno res;
    res.valor = NULL;
    res.tipo = TIPO_NULO;

    if (!node)
        return res;

    printf("Ejecutando nodo: %s\n", node->kind);

    if (strcmp(node->kind, "literal") == 0)
    {
        if (isdigit(node->value[0]))
        {
            if (strchr(node->value, '.') != NULL)
            {
                // Es decimal
                float *val = malloc(sizeof(float));
                *val = atof(node->value);
                res.valor = val;
                res.tipo = TIPO_DECIMAL;
            }
            else
            {
                // Es entero
                int *val = malloc(sizeof(int));
                *val = atoi(node->value);
                res.valor = val;
                res.tipo = TIPO_ENTERO;
            }
        }
        else if (node->value[0] == '"' && node->value[strlen(node->value) - 1] == '"')
        {
            // Es una cadena
            char *val = strdup(node->value);
            res.valor = val;
            res.tipo = TIPO_CADENA;
        }
        else if (strcmp(node->value, "true") == 0 || strcmp(node->value, "false") == 0)
        {

            int *val = malloc(sizeof(int));
            if (strcmp(node->value, "true") == 0)
            {
                *val = 1;
            }
            else
            {
                *val = 0;
            }
            res.valor = val;
            res.tipo = TIPO_BOOLEANO;
        }

        else
        {
            printf("Error: literal no soportado: %s\n", node->value);
        }
    }

    // IDENTIFICADOR
    else if (strcmp(node->kind, "id") == 0)
    {
        struct symbol *s = getVar(entorno, node->value);
        if (s)
        {
            res.valor = s->valor;
            res.tipo = s->tipo;
        }
        else
        {
            // printf("Error: variable '%s' no definida\n", node->value);
        }
    }

    // BINARIO
    else if (strcmp(node->kind, "binop") == 0)
    {
        TipoRetorno leftVal = ejecutar(node->left, entorno);
        TipoRetorno rightVal = ejecutar(node->right, entorno);

        if (leftVal.tipo == TIPO_ENTERO && rightVal.tipo == TIPO_ENTERO)
        {
            int *val = malloc(sizeof(int));
            if (strcmp(node->value, "+") == 0)
                *val = *((int *)leftVal.valor) + *((int *)rightVal.valor);
            else if (strcmp(node->value, "-") == 0)
                *val = *((int *)leftVal.valor) - *((int *)rightVal.valor);
            else if (strcmp(node->value, "*") == 0)
                *val = *((int *)leftVal.valor) * *((int *)rightVal.valor);
            else if (strcmp(node->value, "/") == 0)
                *val = *((int *)leftVal.valor) / *((int *)rightVal.valor);
            res.valor = val;
            res.tipo = TIPO_ENTERO;
        }
        else if (leftVal.tipo == TIPO_DECIMAL || rightVal.tipo == TIPO_DECIMAL)
        {
            float v1 = (leftVal.tipo == TIPO_ENTERO) ? *((int *)leftVal.valor) : *((float *)leftVal.valor);
            float v2 = (rightVal.tipo == TIPO_ENTERO) ? *((int *)rightVal.valor) : *((float *)rightVal.valor);
            float *val = malloc(sizeof(float));
            if (strcmp(node->value, "+") == 0)
                *val = v1 + v2;
            else if (strcmp(node->value, "-") == 0)
                *val = v1 - v2;
            else if (strcmp(node->value, "*") == 0)
                *val = v1 * v2;
            else if (strcmp(node->value, "/") == 0)
                *val = v1 / v2;
            res.valor = val;
            res.tipo = TIPO_DECIMAL;
        }
        else
        {
            printf("Error: operación binaria con tipos incompatibles\n");
        }
    }

    // PRINT
    else if (strcmp(node->kind, "print") == 0)
    {
        TipoRetorno valor = ejecutar(node->left, entorno);
        switch (valor.tipo)
        {
        case TIPO_ENTERO:
            printf("%d\n", *((int *)valor.valor));
            break;
        case TIPO_DECIMAL:
            printf("%f\n", *((float *)valor.valor));
            break;
        case TIPO_CADENA:
            printf("%s\n", (char *)valor.valor);
            break;
        case TIPO_BOOLEANO:
            if (*((int *)valor.valor) == 1)
            {
                printf("true\n");
            }
            else
            {
                printf("false\n");
            }

            break;
        case TIPO_CHAR:
            printf("%c\n", *((char *)valor.valor));
            break;
        default:
            printf("null\n");
        }
    }

    // DECLARACION
    else if (strcmp(node->kind, "var") == 0)
    {
        struct symbol *s = malloc(sizeof(struct symbol));
        s->id = strdup(node->value);

        TipoRetorno val = {NULL, TIPO_NULO};
        if (node->right)
        {
            val = ejecutar(node->right, entorno);
            s->valor = val.valor;
            s->tipo = val.tipo;
            s->siguiente = NULL;
            setVar(entorno, s);
        }
        else
        {

            TipoRetorno res;
            res.valor = NULL;
            res.tipo = TIPO_NULO;
            const char *t = (node->left && node->left->value) ? node->left->value : NULL;

            if (t && (strcmp(t, "int") == 0))
            {

                int *p = malloc(sizeof(int));
                *p = 0;
                res.valor = p;
                res.tipo = TIPO_ENTERO;
            }
            else if (t && (strcmp(t, "float") == 0))
            {
                float *p = malloc(sizeof(float));
                *p = 0.0f;
                res.valor = p;
                res.tipo = TIPO_DECIMAL;
            }
            else if (t && (strcmp(t, "string") == 0))
            {
                res.valor = strdup("null");
                res.tipo = TIPO_CADENA;
            }
            else if (t && (strcmp(t, "bool") == 0))
            {
                int *p = malloc(sizeof(int));
                *p = 0;
                res.valor = p;
                res.tipo = TIPO_BOOLEANO;
            }
            else if (t && strcmp(t, "char") == 0)
            {
                char *p = malloc(sizeof(char));
                *p = '\0';
                res.valor = p;
                res.tipo = TIPO_CHAR;
            }
            else
            {
                res.valor = NULL;
                res.tipo = TIPO_NULO;
            }
            s->valor = res.valor;
            s->tipo = res.tipo;
            s->siguiente = NULL;
            setVar(entorno, s);
        }
    }
    else if (strcmp(node->kind, "var_const") == 0)
    {
        printf("Declarando constante\n");
        struct symbol *s = malloc(sizeof(struct symbol));
        s->id = strdup(node->value);

        TipoRetorno val = {NULL, TIPO_NULO};
        if (node->right)
        {
            val = ejecutar(node->right, entorno);
            s->valor = val.valor;
            s->tipo = val.tipo;
            s->constante = 1;
            s->siguiente = NULL;
            setVar(entorno, s);
        }
        else
        {

            printf("Error: una constante debe ser inicializada al declararse\n");
        }
    }
    else if (strcmp(node->kind, "assign") == 0)
    {
        struct symbol *s = getVar(entorno, node->value);
        if (s)
        {
            TipoRetorno val = ejecutar(node->left, entorno);
            if (s->tipo == val.tipo && s->constante != 1)
            {
                s->valor = val.valor;
            }
            else
            {
                printf("Error: asignación de tipo incompatible a la variable '%s'\n", s->id);
            }
        }
        else
        {
            printf("Error: variable '%s' no definida para asignación\n", node->value);
        }
    }
    else if (strcmp(node->kind, "cast") == 0)
    {
        TipoRetorno valor = ejecutar(node->left, entorno);
        char *tipoDestino = node->right->value;

        TipoRetorno res = {NULL, TIPO_NULO};

        if (strcmp(tipoDestino, "int") == 0)
        {
            int *p = malloc(sizeof(int));
            if (valor.tipo == TIPO_DECIMAL)
                *p = (int)(*(float *)valor.valor);
            else if (valor.tipo == TIPO_CHAR)
                *p = (int)(*(char *)valor.valor);
            else if (valor.tipo == TIPO_ENTERO)
                *p = *(int *)valor.valor;
            res.valor = p;
            res.tipo = TIPO_ENTERO;
        }
        else if (strcmp(tipoDestino, "float") == 0 || strcmp(tipoDestino, "double") == 0)
        {
            float *p = malloc(sizeof(float));
            if (valor.tipo == TIPO_ENTERO)
                *p = (float)(*(int *)valor.valor);
            else if (valor.tipo == TIPO_CHAR)
                *p = (float)(*(char *)valor.valor);
            else if (valor.tipo == TIPO_DECIMAL)
                *p = *(float *)valor.valor;
            res.valor = p;
            res.tipo = TIPO_DECIMAL;
        }
        else if (strcmp(tipoDestino, "char") == 0)
        {
            char *p = malloc(sizeof(char));
            if (valor.tipo == TIPO_ENTERO)
                *p = (char)(*(int *)valor.valor);
            else if (valor.tipo == TIPO_DECIMAL)
                *p = (char)(*(float *)valor.valor);
            else if (valor.tipo == TIPO_CHAR)
                *p = *(char *)valor.valor;
            res.valor = p;
            res.tipo = TIPO_CHAR;
        }

        return res;
    }

    else if (strcmp(node->kind, "link") == 0)
    {
        ejecutar(node->left, entorno);
        ejecutar(node->right, entorno);
    }

    return res;
}