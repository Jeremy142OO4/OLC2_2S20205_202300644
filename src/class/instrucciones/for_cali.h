#ifndef FOR_CALI_H
#define FOR_CALI_H

#include "../tipos.h"  
#include "../entorno/entorno.h"    
#include "../../ast/ast.h"  
#include "../expresiones/ejecutar.h"  

void ejecutarForCali(struct ASTNode* node, struct entorno* entorno);

#endif