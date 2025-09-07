#ifndef DECLARAR_VAR_H
#define DECLARAR_VAR_H

#include "../tipos.h"      
#include "../entorno.h"    
#include "../../ast/ast.h"  
#include "../ejecutar.h"  

void ejecutarDeclarar(struct ASTNode* node, struct entorno* e, int constante);

#endif
