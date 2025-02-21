#include "stack.h"
#include<stdio.h>
void StackInit(Stack* stk) {
    //stk->_size = 0;
    stk->_top = -1;
}
ElementType StackTop(Stack* stk) {
    return stk->elements[stk->_top];
}

int StackEmpty(Stack* stk) {
    if(stk->_top==-1)
    return 1;
    else
    return 0;
    // return (stk->_top == -1);
}

void StackPush(Stack* stk, ElementType element) {
    ++stk->_top;
    stk->elements[stk->_top] = element;
    //stk->_size++;
    // stk->_top++;
}

void StackPop(Stack* stk) {
    if(StackEmpty(stk)){
        printf("Stack Empty\n");
        return;
    } 
    //stk->_size--;
    stk->_top--;
}
