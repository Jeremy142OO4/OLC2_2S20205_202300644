#include "ejecutar.h"
#include "entorno.h"
#include "symbol.h"
#include "./expresiones/aritmetico.h"
#include "./expresiones/literal.h"
#include "./expresiones/id.h"
#include "./expresiones/relacional.h"
#include "./expresiones/casteo.h"
#include "./instrucciones/imprimir.h"
#include "./instrucciones/declarar_var.h"
#include "./instrucciones/asignacion.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

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
        res = ejecutarLiteral(node->value);
    }
    else if (strcmp(node->kind, "id") == 0)
    {
        res = ejecutarId(entorno, node->value);
    }
    else if (strcmp(node->kind, "binop") == 0)
    {
        TipoRetorno exp1 = ejecutar(node->left, entorno);
        TipoRetorno exp2 = ejecutar(node->right, entorno);
        if (strcmp(node->value, "+") == 0 || strcmp(node->value, "-") == 0 || strcmp(node->value, "*") == 0 || strcmp(node->value, "/") == 0 || strcmp(node->value, "%") == 0)
        {
            res = ejecutarAritmetico(node->value, exp1, exp2);
        }
        else if (strcmp(node->value, "==") == 0 || strcmp(node->value, "!=") == 0||  strcmp(node->value, "<") == 0 || strcmp(node->value, "<=") == 0 || strcmp(node->value, ">") == 0 || strcmp(node->value, ">=") == 0)
        {
            TipoRetorno exp1 = ejecutar(node->left, entorno);
            TipoRetorno exp2 = ejecutar(node->right, entorno);
            res = ejecutarRelacional(node->value, exp1, exp2);
        }

        else
        {
            printf("Error: operación binaria no soportada: %s\n", node->value);
            return res;
        }
    }
    else if (strcmp(node->kind, "print") == 0)
    {
        TipoRetorno valor = ejecutar(node->left, entorno);
        ejecutarImprimir(valor);
    }
    else if (strcmp(node->kind, "var") == 0)
    {
        ejecutarDeclarar(node, entorno, 0);
    }
    else if (strcmp(node->kind, "var_const") == 0)
    {
        ejecutarDeclarar(node, entorno, 1);
    }
    else if (strcmp(node->kind, "assign") == 0)
    {
        res = ejecutarAsignacion(node, entorno);
    }
    else if (strcmp(node->kind, "cast") == 0)
    {
        TipoRetorno valor = ejecutar(node->left, entorno);
        const char* tipoDestino = node->right ? node->right->value : NULL;
        res = ejecutarCasteo(tipoDestino, valor);
    }
    else if (strcmp(node->kind, "link") == 0)
    {
        ejecutar(node->left, entorno);
        ejecutar(node->right, entorno);
    }

    return res;
}