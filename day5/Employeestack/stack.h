#include "Employee.h"
#ifndef STACK_HEADER
#define STACK_HEADER
#define STACK_SIZE 1000

typedef Employee ElementType;
typedef struct {
    ElementType elements[STACK_SIZE];
    int _size;

    int _top;
} Stack;
void StackInit(Stack* stk);
ElementType StackTop(Stack* stk);
int StackEmpty(Stack* stk);
void StackPush(Stack* stk, ElementType element);
void StackPop(Stack* stk);
#endif
