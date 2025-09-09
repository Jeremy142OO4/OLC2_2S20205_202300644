#include <stdio.h>
#include "if.h"
#include <string.h>


void ejecutarIf(struct ASTNode* node, struct entorno* e) {
    if (!node) return;

    TipoRetorno cond = ejecutar(node->left, e);

    struct ASTNode* par  = node->right;
    struct ASTNode* thenb = par ? par->left  : NULL;
    struct ASTNode* elseb = par ? par->right : NULL;

    if (*(int*)cond.valor) {
        if (thenb) {
            struct entorno* entorno_if = nuevo_entorno(e);
            ejecutar(thenb, entorno_if);        
        }
    } else {
        if (elseb) {
            if (elseb->kind && strcmp(elseb->kind, "if") == 0) {
                ejecutarIf(elseb, e);
            } else {
                struct entorno* entorno_else = nuevo_entorno(e);
                ejecutar(elseb, entorno_else);    
            }
        }
    }
}
