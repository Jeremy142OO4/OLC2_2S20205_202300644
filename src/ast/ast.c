#include "ast.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static struct ASTNode* make_node(const char* kind, const char* value, struct ASTNode* left, struct ASTNode* right) {
    struct ASTNode* n = malloc(sizeof(struct ASTNode));
    n->kind = strdup(kind);
    n->value = value ? strdup(value) : NULL;
    n->left = left;
    n->right = right;
    return n;
}

struct ASTNode* ast_link(struct ASTNode* left, struct ASTNode* right) { return make_node("link", NULL, left, right); }
struct ASTNode* ast_print_stmt(struct ASTNode* expr) { return make_node("print", NULL, expr, NULL); }
struct ASTNode* ast_var_decl(char* id, struct ASTNode* type, struct ASTNode* expr) { return make_node("var", id, type, expr); }
struct ASTNode* ast_var_decl_const(char* id, struct ASTNode* type, struct ASTNode* expr) { return make_node("var_const", id, type, expr); }
struct ASTNode* ast_assign(char* op, struct ASTNode* expr, struct ASTNode* id) { return make_node("assign", op, id, expr); }
struct ASTNode* ast_type(char* typeName) { return make_node("type", typeName, NULL, NULL); }
struct ASTNode* ast_while(struct ASTNode* cond,struct ASTNode* body) { return make_node("while", NULL, cond, body); }
struct ASTNode* ast_incremento_decremento(char* op, struct ASTNode* expr) { return make_node("incremento_decremento", op, expr, NULL); }
struct ASTNode* ast_switch(struct ASTNode* expr, struct ASTNode* cases) {return make_node("switch", NULL, expr, cases);}
struct ASTNode* ast_case(struct ASTNode* value, struct ASTNode* body) {return make_node("case", NULL, value, body);}
struct ASTNode* ast_if(struct ASTNode* cond,struct ASTNode* then_body,struct ASTNode* else_part) {return make_node("if", NULL, cond, ast_link(then_body, else_part));}
struct ASTNode* ast_literal(char* value) { return make_node("literal", value, NULL, NULL); }
struct ASTNode* ast_break() { return make_node("break", NULL, NULL, NULL); }
struct ASTNode* ast_continue() { return make_node("continue", NULL, NULL, NULL); }
struct ASTNode* ast_return(struct ASTNode* expr) { return make_node("return", NULL, expr, NULL); }
struct ASTNode* ast_parametros(char* id, struct ASTNode* tipo, struct ASTNode* siguiente) { return make_node("parametro", id, tipo, siguiente); }
struct ASTNode* ast_for(struct ASTNode* init, struct ASTNode* cond, struct ASTNode* cambio, struct ASTNode* body) { return make_node("for", NULL, ast_link(init, cond), ast_link(cambio, body)); }
struct ASTNode* ast_cast(struct ASTNode* value,struct ASTNode* type) { return make_node("cast", NULL, value, type); }
struct ASTNode* ast_identifier(char* name) { return make_node("id", name, NULL, NULL); }
struct ASTNode* ast_funcion_decl(char* nombre, struct ASTNode* parametros, struct ASTNode* tipo, struct ASTNode* instrucciones) { return make_node("funcion_decl", nombre, parametros, ast_link(tipo, instrucciones)); }
struct ASTNode* ast_binop(char* op, struct ASTNode* left, struct ASTNode* right) { return make_node("binop", op, left, right); }
struct ASTNode* ast_unop(char* op, struct ASTNode* expr) { return make_node("unop", op, expr, NULL); }

void ast_print(struct ASTNode* node, int depth) {
    if (!node) return;
    for (int i=0; i<depth; i++) printf("  ");
    printf("%s", node->kind);
    if (node->value) printf(" (%s)", node->value);
    printf("\n");
    ast_print(node->left, depth+1);
    ast_print(node->right, depth+1);
}