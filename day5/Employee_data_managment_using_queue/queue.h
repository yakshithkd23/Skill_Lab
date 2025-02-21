#include "Employee.h"
#ifndef QUEUE_HEADER
#define QUEUE_HEADER
#define QUEUE_SIZE 1000

typedef Employee ElementType;
typedef struct {
    ElementType elements[QUEUE_SIZE];
    int _front;
    int _rear;
} Queue;

void Init(Queue* q);
ElementType QueueFront(Queue* q);
int QueueEmpty(Queue* q);
void QueueEnqueue(Queue* q, ElementType element);
void QueueDequeue(Queue* q);

#endif
