#include <stdio.h>
#include "for_cali.h"
#include <string.h>
#include <stdlib.h>


void ForCali(struct ASTNode* node, struct entorno* entorno,TipoRetorno valor) {
    if (!node) return;
    struct entorno* entorno_for = nuevo_entorno(entorno);
    struct symbol *s = getVar(entorno, "i");
    TipoRetorno segundo_valor = ejecutar(node->right->left, entorno_for);
    s->valor = valor.valor;
    if(*(int*)segundo_valor.valor >= *(int*)valor.valor) {
        struct ASTNode* instrucciones = node->right->right;
        if (instrucciones) {
            TipoRetorno r = ejecutar(instrucciones, entorno_for);        
            if (r.control == CTRL_BREAK) return;
        }
        int* p = malloc(sizeof(int));
        *p = 1;
        int *salida = malloc(sizeof(int));
        *salida = (*(int*)valor.valor) + *p;
        valor.valor = salida;
        ForCali(node, entorno_for,valor);
        
    } else {
        return;
    }
    
}

void ejecutarForCali(struct ASTNode* node, struct entorno* entorno) {
    if (!node) return;


    struct entorno* entorno_for= nuevo_entorno(entorno);
    struct ASTNode* init = node->left ? node->left->left : NULL;
    struct ASTNode* primer_valor = node->left ? node->left->right : NULL;
    TipoRetorno valor_inicial = ejecutar(primer_valor,entorno);
    //printf("valor %d",*(int*)valor_inicial.valor);
    ejecutar(init, entorno_for);


    ForCali(node, entorno_for,valor_inicial);
}