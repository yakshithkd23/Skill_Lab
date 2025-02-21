#include "queue.h"
#include<stdio.h>

void Init(Queue* q) {
    q->_front = -1;
    q->_rear = -1;
}

ElementType QueueFront(Queue* q) {
    return q->elements[q->_front + 1];
}

int QueueEmpty(Queue* q) {
    if (q->_front == q->_rear || q->_rear == -1) {
        return 1;
    }
    return 0;
}

void QueueEnqueue(Queue* q, ElementType element) {
    ++q->_rear;
    q->elements[q->_rear] = element;
}

void QueueDequeue(Queue* q) {
    if (QueueEmpty(q)) {
        printf("Queue Empty. Cannot display\n");
        return;
    }
    q->_front++;
    if (q->_front > q->_rear) {
        q->_front = q->_rear = -1;
    }
}
