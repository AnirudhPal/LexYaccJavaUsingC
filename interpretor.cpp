#include "interpretor.hpp"

ClassList classGlob;
int typeerror = 0;

/** Exp Defs **/

/** Plus Defs (of Exp) **/
void Plus::compute() {
  left->env = env;
  right->env = env;
  left->compute();
  right->compute();
  val = left->val + right->val;
}
int Plus::typeCheck() {
  left->env = env;
  right->env = env;
  type = PrimType::Int;
  if(left->typeCheck() || right->typeCheck()) {
    return 1;
  }
  if(left->type != PrimType::Int || right->type != PrimType::Int) {
    std::cout << "Type Violation in Line " << line << " : " << "op1 + op2 -> op1 or/and op2 not INT" << "\n";
    return 1;
  }
  return 0;
}
void Plus::print() {
  std::cout << "Plus(";
  left->print();
  std::cout << ", ";
  right->print();
  std::cout << ", ";
  switch (type) {
    case PrimType::Int: std::cout << "Int_Type"; break;
    case PrimType::Bool: std::cout << "Bool_Type"; break;
  }
  std::cout << ")";
}
void Plus::addFields(Exp* e1, Exp* e2) {
  left = e1;
  right = e2;
  type = PrimType::Int;
}

/** Minus Defs (of Exp) **/
void Minus::compute() {
  left->env = env;
  right->env = env;
  left->compute();
  right->compute();
  val = left->val - right->val;
}
int Minus::typeCheck() {
  left->env = env;
  right->env = env;
  type = PrimType::Int;
  if(left->typeCheck() || right->typeCheck()) {
    return 1;
  }
  if(left->type != PrimType::Int || right->type != PrimType::Int) {
    std::cout << "Type Violation in Line " << line << " : " << "op1 - op2 -> op1 or/and op2 not INT" << "\n";
    return 1;
  }
  return 0;
}
void Minus::print() {
  std::cout << "Minus(";
  left->print();
  std::cout << ", ";
  right->print();
  std::cout << ", ";
  switch (type) {
    case PrimType::Int: std::cout << "Int_Type"; break;
    case PrimType::Bool: std::cout << "Bool_Type"; break;
  }
  std::cout << ")";
}
void Minus::addFields(Exp* e1, Exp* e2) {
  left = e1;
  right = e2;
  type = PrimType::Int;
}

/** Times Defs (of Exp) **/
void Times::compute() {
  left->env = env;
  right->env = env;
  left->compute();
  right->compute();
  val = left->val * right->val;
}
int Times::typeCheck() {
  left->env = env;
  right->env = env;
  type = PrimType::Int;
  if(left->typeCheck() || right->typeCheck()) {
    return 1;
  }
  if(left->type != PrimType::Int || right->type != PrimType::Int) {
    std::cout << "Type Violation in Line " << line << " : " << "op1 * op2 -> op1 or/and op2 not INT" << "\n";
    return 1;
  }
  return 0;
}
void Times::print() {
  std::cout << "Times(";
  left->print();
  std::cout << ", ";
  right->print();
  std::cout << ", ";
  switch (type) {
    case PrimType::Int: std::cout << "Int_Type"; break;
    case PrimType::Bool: std::cout << "Bool_Type"; break;
  }
  std::cout << ")";
}
void Times::addFields(Exp* e1, Exp* e2) {
  left = e1;
  right = e2;
  type = PrimType::Int;
}

/** Div Defs (of Exp) **/
void Div::compute() {
  left->env = env;
  right->env = env;
  left->compute();
  right->compute();
  val = left->val / right->val;
}
int Div::typeCheck() {
  left->env = env;
  right->env = env;
  type = PrimType::Int;
  if(left->typeCheck() || right->typeCheck()) {
    return 1;
  }
  if(left->type != PrimType::Int || right->type != PrimType::Int) {
    std::cout << "Type Violation in Line " << line << " : " << "op1 / op2 -> op1 or/and op2 not INT" << "\n";
    return 1;
  }
  return 0;
}
void Div::print() {
  std::cout << "Div(";
  left->print();
  std::cout << ", ";
  right->print();
  std::cout << ", ";
  switch (type) {
    case PrimType::Int: std::cout << "Int_Type"; break;
    case PrimType::Bool: std::cout << "Bool_Type"; break;
  }
  std::cout << ")";
}
void Div::addFields(Exp* e1, Exp* e2) {
  left = e1;
  right = e2;
  type = PrimType::Int;
}

/** Less Defs (of Exp) **/
void Less::compute() {
  left->env = env;
  right->env = env;
  left->compute();
  right->compute();
  val = left->val < right->val;
}
int Less::typeCheck() {
  left->env = env;
  right->env = env;
  type = PrimType::Bool;
  if(left->typeCheck() || right->typeCheck()) {
    return 1;
  }
  if(left->type != PrimType::Int || right->type != PrimType::Int) {
    std::cout << "Type Violation in Line " << line << " : " << "op1 < op2 -> op1 or/and op2 not INT" << "\n";
    return 1;
  }
  return 0;
}
void Less::print() {
  std::cout << "Less(";
  left->print();
  std::cout << ", ";
  right->print();
  std::cout << ", ";
  switch (type) {
    case PrimType::Int: std::cout << "Int_Type"; break;
    case PrimType::Bool: std::cout << "Bool_Type"; break;
  }
  std::cout << ")";
}
void Less::addFields(Exp* e1, Exp* e2) {
  left = e1;
  right = e2;
  type = PrimType::Bool;
}

/** Greater Defs (of Exp) **/
void Greater::compute() {
  left->env = env;
  right->env = env;
  left->compute();
  right->compute();
  val = left->val > right->val;
}
int Greater::typeCheck() {
  left->env = env;
  right->env = env;
  type = PrimType::Bool;
  if(left->typeCheck() || right->typeCheck()) {
    return 1;
  }
  if(left->type != PrimType::Int || right->type != PrimType::Int) {
    std::cout << "Type Violation in Line " << line << " : " << "op1 > op2 -> op1 or/and op2 not INT" << "\n";
    return 1;
  }
  return 0;
}
void Greater::print() {
  std::cout << "Greater(";
  left->print();
  std::cout << ", ";
  right->print();
  std::cout << ", ";
  switch (type) {
    case PrimType::Int: std::cout << "Int_Type"; break;
    case PrimType::Bool: std::cout << "Bool_Type"; break;
  }
  std::cout << ")";
}
void Greater::addFields(Exp* e1, Exp* e2) {
  left = e1;
  right = e2;
  type = PrimType::Bool;
}

/** Less Equal Defs (of Exp) **/
void LessEqual::compute() {
  left->env = env;
  right->env = env;
  left->compute();
  right->compute();
  val = left->val <= right->val;
}
int LessEqual::typeCheck() {
  left->env = env;
  right->env = env;
  type = PrimType::Bool;
  if(left->typeCheck() || right->typeCheck()) {
    return 1;
  }
  if(left->type != PrimType::Int || right->type != PrimType::Int) {
    std::cout << "Type Violation in Line " << line << " : " << "op1 <= op2 -> op1 or/and op2 not INT" << "\n";
    return 1;
  }
  return 0;
}
void LessEqual::print() {
  std::cout << "LessEqual(";
  left->print();
  std::cout << ", ";
  right->print();
  std::cout << ", ";
  switch (type) {
    case PrimType::Int: std::cout << "Int_Type"; break;
    case PrimType::Bool: std::cout << "Bool_Type"; break;
  }
  std::cout << ")";
}
void LessEqual::addFields(Exp* e1, Exp* e2) {
  left = e1;
  right = e2;
  type = PrimType::Bool;
}

/** Greater Equal Defs (of Exp) **/
void GreaterEqual::compute() {
  left->env = env;
  right->env = env;
  left->compute();
  right->compute();
  val = left->val >= right->val;
}
int GreaterEqual::typeCheck() {
  left->env = env;
  right->env = env;
  type = PrimType::Bool;
  if(left->typeCheck() || right->typeCheck()) {
    return 1;
  }
  if(left->type != PrimType::Int || right->type != PrimType::Int) {
    std::cout << "Type Violation in Line " << line << " : " << "op1 >= op2 -> op1 or/and op2 not INT" << "\n";
    return 1;
  }
  return 0;
}
void GreaterEqual::print() {
  std::cout << "GreaterEqual(";
  left->print();
  std::cout << ", ";
  right->print();
  std::cout << ", ";
  switch (type) {
    case PrimType::Int: std::cout << "Int_Type"; break;
    case PrimType::Bool: std::cout << "Bool_Type"; break;
  }
  std::cout << ")";
}
void GreaterEqual::addFields(Exp* e1, Exp* e2) {
  left = e1;
  right = e2;
  type = PrimType::Bool;
}

/** Equal Defs (of Exp) **/
void Equal::compute() {
  left->env = env;
  right->env = env;
  left->compute();
  right->compute();
  val = left->val == right->val;
}
int Equal::typeCheck() {
  left->env = env;
  right->env = env;
  type = PrimType::Bool;
  if(left->typeCheck() || right->typeCheck()) {
    return 1;
  }
  if(left->type != PrimType::Int || right->type != PrimType::Int) {
    std::cout << "Type Violation in Line " << line << " : " << "op1 == op2 -> op1 or/and op2 not INT" << "\n";
    return 1;
  }
  return 0;
}
void Equal::print() {
  std::cout << "Equal(";
  left->print();
  std::cout << ", ";
  right->print();
  std::cout << ", ";
  switch (type) {
    case PrimType::Int: std::cout << "Int_Type"; break;
    case PrimType::Bool: std::cout << "Bool_Type"; break;
  }
  std::cout << ")";
}
void Equal::addFields(Exp* e1, Exp* e2) {
  left = e1;
  right = e2;
  type = PrimType::Bool;
}

/** Not Equal Defs (of Exp) **/
void NotEqual::compute() {
  left->env = env;
  right->env = env;
  left->compute();
  right->compute();
  val = left->val != right->val;
}
int NotEqual::typeCheck() {
  left->env = env;
  right->env = env;
  type = PrimType::Bool;
  if(left->typeCheck() || right->typeCheck()) {
    return 1;
  }
  if(left->type != PrimType::Int || right->type != PrimType::Int) {
    std::cout << "Type Violation in Line " << line << " : " << "op1 != op2 -> op1 or/and op2 not INT" << "\n";
    return 1;
  }
  return 0;
}
void NotEqual::print() {
  std::cout << "NotEqual(";
  left->print();
  std::cout << ", ";
  right->print();
  std::cout << ", ";
  switch (type) {
    case PrimType::Int: std::cout << "Int_Type"; break;
    case PrimType::Bool: std::cout << "Bool_Type"; break;
  }
  std::cout << ")";
}
void NotEqual::addFields(Exp* e1, Exp* e2) {
  left = e1;
  right = e2;
  type = PrimType::Bool;
}

/** Or Defs (of Exp) **/
void OrN::compute() {
  left->env = env;
  right->env = env;
  left->compute();
  right->compute();
  val = left->val || right->val;
}
int OrN::typeCheck() {
  left->env = env;
  right->env = env;
  type = PrimType::Bool;
  if(left->typeCheck() || right->typeCheck()) {
    return 1;
  }
  if(left->type != PrimType::Bool || right->type != PrimType::Bool) {
    std::cout << "Type Violation in Line " << line << " : " << "op1 || op2 -> op1 or/and op2 not BOOL" << "\n";
    return 1;
  }
  return 0;
}
void OrN::print() {
  std::cout << "OrN(";
  left->print();
  std::cout << ", ";
  right->print();
  std::cout << ", ";
  switch (type) {
    case PrimType::Int: std::cout << "Int_Type"; break;
    case PrimType::Bool: std::cout << "Bool_Type"; break;
  }
  std::cout << ")";
}
void OrN::addFields(Exp* e1, Exp* e2) {
  left = e1;
  right = e2;
  type = PrimType::Bool;
}

/** And Defs (of Exp) **/
void AndN::compute() {
  left->env = env;
  right->env = env;
  left->compute();
  right->compute();
  val = left->val && right->val;
}
int AndN::typeCheck() {
  left->env = env;
  right->env = env;
  type = PrimType::Bool;
  if(left->typeCheck() || right->typeCheck()) {
    return 1;
  }
  if(left->type != PrimType::Bool || right->type != PrimType::Bool) {
    std::cout << "Type Violation in Line " << line << " : " << "op1 && op2 -> op1 or/and op2 not BOOL" << "\n";
    return 1;
  }
  return 0;
}
void AndN::print() {
  std::cout << "AndN(";
  left->print();
  std::cout << ", ";
  right->print();
  std::cout << ", ";
  switch (type) {
    case PrimType::Int: std::cout << "Int_Type"; break;
    case PrimType::Bool: std::cout << "Bool_Type"; break;
  }
  std::cout << ")";
}
void AndN::addFields(Exp* e1, Exp* e2) {
  left = e1;
  right = e2;
  type = PrimType::Bool;
}

/** Not Defs (of Exp) **/
void NotN::compute() {
  exp->compute();
  val = !exp->val;
}
int NotN::typeCheck() {
  exp->env = env;
  type = PrimType::Bool;
  if(exp->typeCheck()) {
    return 1;
  }
  if(exp->type != PrimType::Bool) {
    std::cout << "Type Violation in Line " << line << " : " << "!op1 -> op1 not BOOL" << "\n";
    return 1;
  }
  return 0;
}
void NotN::print() {
  std::cout << "NotN(";
  exp->print();
  std::cout << ", ";
  switch (type) {
    case PrimType::Int: std::cout << "Int_Type"; break;
    case PrimType::Bool: std::cout << "Bool_Type"; break;
  }
  std::cout << ")";
}
void NotN::addFields(Exp* e1) {
  exp = e1;
  type = PrimType::Bool;
}

/** Integer Literal Defs (of Exp) **/
void IntegerLiteral::compute() {
  val = std::stoi(str);
  return;
}
int IntegerLiteral::typeCheck() {
  try {
    std::stoi(str);
  }
  catch (const std::out_of_range& oor) {
    std::cout << "Type Violation in Line " << line << " : " << "INT Overflow" << "\n";
  }
  type = PrimType::Int;
  return 0;
}
void IntegerLiteral::print() {
  std::cout << "IntegerLiteral(";
  std::cout << val << ", ";
  switch (type) {
    case PrimType::Int: std::cout << "Int_Type"; break;
    case PrimType::Bool: std::cout << "Bool_Type"; break;
  }
  std::cout << ")";
}

/** Boolean Literal Defs (of Exp) **/
void True::compute() {
  return;
}
int True::typeCheck() {
  type = PrimType::Bool;
  return 0;
}
void True::print() {
  std::cout << "True(";
  switch (type) {
    case PrimType::Int: std::cout << "Int_Type"; break;
    case PrimType::Bool: std::cout << "Bool_Type"; break;
  }
  std::cout << ")";
}
void False::compute() {
  return;
}
int False::typeCheck() {
  type = PrimType::Bool;
  return 0;
}
void False::print() {
  std::cout << "False(";
  switch (type) {
    case PrimType::Int: std::cout << "Int_Type"; break;
    case PrimType::Bool: std::cout << "Bool_Type"; break;
  }
  std::cout << ")";
}

/** Get Defs (of Expression) **/
void Get::compute() {
  Var* v = env->getVar(id);
  val = v->val;
  type = v->type;
}
int Get::typeCheck() {
  if(env == NULL) {
    std::cout << "Type Violation in Line " << line << " : " << id << " not declared" << "\n";
    return 1;
  }
  Var* v = env->getVar(id);
  if(v == NULL) {
    std::cout << "Type Violation in Line " << line << " : " << id << " not declared" << "\n";
    return 1;
  }
  type = v->type;
  return 0;
}
void Get::print() {
  std::cout << "Get(" << id << ")";
}

/** Statement Def **/

/** Block Defs (of Statement) **/
void Block::compute() {
  for(Statement* stm: stms) {
    stm->env = env;
    stm->compute();
    if(stm->e != NULL && stm->isRet) {
      e = stm->e;
      break;
    }
  }
}
int Block::typeCheck() {
  int i = 0;
  for(Statement* stm: stms) {
    stm->env = env;
    if(stm->typeCheck()) {
      return 1;
    }
  }
  return 0;
}
void Block::print() {
  std::cout << "Block(";
  for(Statement* stm: stms) {
    stm->print();
    std::cout << ", ";
  }
  std::cout << "\b \b\b \b)";
}
void Block::addStatement(Statement* stm) {
  stms.push_back(stm);
}

/** Print Defs (of Statement) **/
void Print::compute() {
  e->env = env;
  e->compute();
  switch (e->type) {
    case PrimType::Int: std::cout << e->val; break;
    case PrimType::Bool:
      if(e->val)
        std::cout << "true";
      else
        std::cout << "false";
    break;
    default: std::cout << e->val; break;
  }
}
int Print::typeCheck() {
  e->env = env;
  if(e->typeCheck()) {
    return 1;
  }
  if(e->type != PrimType::Int) {
    std::cout << "Type Violation in Line " << line << " : " << "Can only print INT or STR" << "\n";;
    return 1;
  }
  return 0;
}
void Print::print() {
  std::cout << "Print(";
  e->print();
  std::cout << ")";
}
void PrintStr::compute() {
  std::cout << str;
}
int PrintStr::typeCheck() {
  return 0;
}
void PrintStr::print() {
  std::cout << "PrintStr(" << str << ")";
}
void PrintStr::setStr(std::string s) {
  str = s.substr(s.find_first_of('"') + 1, s.find_last_of('"') - 1);
}
void PrintLn::compute() {
  e->env = env;
  e->compute();
  switch (e->type) {
    case PrimType::Int: std::cout << e->val << "\n"; break;
    case PrimType::Bool:
      if(e->val)
        std::cout << "true" << "\n";
      else
        std::cout << "false" << "\n";
    break;
    default: std::cout << e->val; break;
  }
}
int PrintLn::typeCheck() {
  e->env = env;
  if(e->typeCheck()) {
    return 1;
  }
  if(e->type != PrimType::Int) {
    std::cout << "Type Violation in Line " << line << " : " << "Can only print INT or STR" << "\n";;
    return 1;
  }
  return 0;
}
void PrintLn::print() {
  std::cout << "PrintLn(";
  e->print();
  std::cout << ")";
}
void PrintStrLn::compute() {
  std::cout << str << "\n";
}
int PrintStrLn::typeCheck() {
  return 0;
}
void PrintStrLn::print() {
  std::cout << "PrintStrLn(" << str << ")";
}
void PrintStrLn::setStr(std::string s) {
  str = s.substr(s.find_first_of('"') + 1, s.find_last_of('"') - 1);
}

/** If Defs (of Statement) **/
void If::compute() {
  exp->env = env;
  exp->compute();
  if(exp->val) {
    stm1->env = env;
    stm1->compute();
    if(stm1->e != NULL) {e = stm1->e;}
  }
  else {
    stm2->env = env;
    stm2->compute();
    if(stm2->e != NULL) {e = stm2->e;}
  }
}
int If::typeCheck() {
  exp->env = env;
  stm1->env = env;
  stm2->env = env;
  if(exp->typeCheck() || stm1->typeCheck() || stm2->typeCheck()) {
    return 1;
  }
  if(exp->type != PrimType::Bool) {
    std::cout << "Type Violation in Line " << line << " : " << "if(op) op in not BOOL" << "\n";;
    return 1;
  }
  return 0;
}
void If::print() {
  std::cout << "If(";
  exp->print();
  std::cout << ", ";
  stm1->print();
  std::cout << ", ";
  stm2->print();
  std::cout << ")";
}
void If::addFields(Exp* e, Statement* s1, Statement* s2) {
  exp = e;
  stm1 = s1;
  stm2 = s2;
}

/** While Defs (of Statement) **/
void While::compute() {
  exp->env = env;
  exp->compute();
  while(exp->val) {
    stm->env = env;
    stm->compute();
    if(stm->e != NULL) {e = stm->e;}
    exp->env = env;
    exp->compute();
  }
}
int While::typeCheck() {
  exp->env = env;
  stm->env = env;
  if(exp->typeCheck() || stm->typeCheck()) {
    return 1;
  }
  if(exp->type != PrimType::Bool) {
    std::cout << "Type Violation in Line " << line << " : " << "while(op) op in not BOOL" << "\n";;
    return 1;
  }
  return 0;
}
void While::print() {
  std::cout << "While(";
  exp->print();
  std::cout << ", ";
  stm->print();
  std::cout << ")";
}
void While::addFields(Exp* e, Statement* s) {
  exp = e;
  stm = s;
}

/** Return Defs (of Statement) **/
void Return::compute() {
  isRet = 1;
  return;
}
int Return::typeCheck() {
  isRet = 1;
  return 0;
}
void Return::print() {
  std::cout << "Return(";
  e->print();
  std::cout << ")";
}

/** Assign Defs (of Statement) **/
void Assign::compute() {
  e->env = env;
  e->compute();
  Var* v = env->getVar(id);
  v->val = e->val;
}
int Assign::typeCheck() {
  e->env = env;
  if(env == NULL) {
    std::cout << "Type Violation in Line " << line << " : " << id << " not declared" << "\n";
    return 1;
  }
  Var* v = env->getVar(id);
  if(e->typeCheck()) {
    return 1;
  }
  if(v == NULL || e->type != v->type) {
    std::cout << "Type Violation in Line " << line << " : " << id << " not declared or exp of wrong type" << "\n";
    return 1;
  }
  return 0;
}
void Assign::print() {
  std::cout << "Assign(" << id << ", ";
  e->print();
  std::cout << ")";
}
void Assign::addFields(std::string s, Exp* ep) {
  id = s;
  e = ep;
}

/** Class Def **/
void Class::print() {
  std::cout << "Class(" << id << ", ";
  methodList->print();
  std::cout << ")";
}
void Class::addFields(std::string s, VarList* v, MethodList* m) {
  id = s;
  varList = v;
  methodList = m;
}
int Class::typeCheck() {
  if(classGlob.getClass(id) != NULL) {
    std::cout << "Type Violation in Line " << line << " : " << id << " class already declared" << "\n";
    typeerror = 1;
    return 1;
  }
  return 0;
}

/** Class List Defs **/
void ClassList::addClass(Class* c) {
  classes.push_back(c);
}
Class* ClassList::getClass(std::string s) {
  for(Class* c: classes) {
    if(c->id.compare(s) == 0)
      return c;
  }
  return NULL;
}
void ClassList::print() {
  std::cout << "ClassList(";
  for(Class* c: classes) {
    c->print();
    std::cout << ", ";
  }
  std::cout << "\b \b\b \b)";
}

/** Method Defs **/
void Method::print() {
  std::cout << "Method(" << id << ", ";
  varList->print();
  std::cout << ", ";
  blk->print();
  std::cout << ", ";
  rexp->print();
  std::cout << ")";
}
void Method::compute() {
  Exp* e = NULL;
  if(blk != NULL) {
    blk->env = varList;
    blk->compute();
    e = blk->e;
  }
  if(e != NULL) {
    e->env = varList;
    e->compute();
    val = e->val;
  }
  else {
    rexp->env = varList;
    rexp->compute();
    val = rexp->val;
  }
}
void Method::addFields(std::string s, VarList* v1, VarList* v2, Block* b, PrimType t, Exp* e) {
  id = s;
  formList = v1;
  if(v2 == NULL) {
    varList = new VarList;
  }
  else {
    varList = v2;
  }
  blk = b;
  type = t;
  rexp = e;
}
int Method::typeCheck() {
  if(blk != NULL) {
    blk->env = varList;
    if(blk->typeCheck()) {
      return 1;
    }
  }
  rexp->env = varList;
  if(rexp->typeCheck()) {
    return 1;
  }
  if(rexp->type != type) {
    std::cout << "Type Violation in Line " << line << " : " << id << "() method has wrong return type" << "\n";
    return 1;
  }
  return 0;
}

/** Method List Defs **/
Method* MethodList::getMethod(std::string s) {
  for(Method* m: methods) {
    if(m->id.compare(s) == 0)
      return m;
  }
  return NULL;
}
void MethodList::addMethod(Method* m) {
  methods.push_back(m);
}
void MethodList::print() {
  std::cout << "MethodList(";
  for(Method* m: methods) {
    m->print();
    std::cout << ", ";
  }
  std::cout << "\b \b\b \b)";
}

/** Var Defs **/
void Var::print() {
  std::cout << "Var(" << id << ", ";
  switch (type) {
    case PrimType::Int: std::cout << "Int_Type"; break;
    case PrimType::Bool: std::cout << "Bool_Type"; break;
    case PrimType::Ref: std::cout << "Ref_Type"; break;
    case PrimType::Obj: std::cout << "Obj_Type"; break;
  }
  std::cout << ")";
}

/** Var List Defs **/
Var* VarList::getVar(std::string s) {
  for(Var* v: vars) {
    if(v->id.compare(s) == 0)
      return v;
  }
  return NULL;
}
void VarList::addVar(Var* v) {
  vars.push_back(v);
}
void VarList::print() {
  std::cout << "VarList(";
  for(Var* v: vars) {
    v->print();
    std::cout << ", ";
  }
  std::cout << ")";
}
void VarList::addClassVars(VarList* cvs) {
  if(cvs == NULL)
    return;
  for(Var* cv: cvs->vars) {
    Var* v = new Var;
    v->id = "this." + cv->id;
    v->type = cv->type;
    vars.push_back(v);
  }
}

/** Object Defs (of Exp) **/
void Object::compute() {
  cls = new Class(*(classGlob.getClass(typeClass)));
  Method* f = new Method(*(cls->methodList->getMethod(func)));
  f->varList->addClassVars(cls->varList);
  f->compute();
  val = f->val;
}
int Object::typeCheck() {
  if(classGlob.getClass(typeClass) == NULL || classGlob.getClass(typeClass)->methodList->getMethod(func) == NULL) {
    std::cout << "Type Violation in Line " << line << " : " << typeClass << " class not declared or " << func << "() method not declared" << "\n";
    return 1;
  }
  Class* c = new Class(*(classGlob.getClass(typeClass)));
  Method* f = new Method(*(c->methodList->getMethod(func)));
  f->varList->addClassVars(c->varList);
  if(f->typeCheck()) {
    //std::cout << "Type Violation in Line " << line << "\n";
    return 1;
  }
  return 0;
}
void Object::print() {
  std::cout << "Object(" << typeClass << ", " << func << ")";
}
void Object::instance(std::string ci) {
  typeClass = ci;
}
void Object::callFunc(std::string f) {
  func = f;
  type = PrimType::Int;
}
