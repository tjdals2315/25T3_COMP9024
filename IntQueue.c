// Integer Queue ADO implementation ... COMP9024 25T3

#include "IntQueue.h"
#include <assert.h>


static int queue[MAXITEMS];
static int front = 0;   // index of first element
static int rear = -1;    // index of last element
static int count = 0;    // number of elements

void QueueInit() {
    front = 0;
    rear = -1;
    count = 0;
}

int QueueIsEmpty() {
    return (count == 0);
}

// Enqueue
void QueueEnqueue(int n) {
    assert(count < MAXITEMS);  // check queue not full
    rear = (rear + 1) % MAXITEMS;  // wrap after MAXITEMS-1
    queue[rear] = n;
    count++;
}

// Dequeue
int QueueDequeue() {
    assert(count > 0);  // check queue not empty
    int n = queue[front];
    front = (front + 1) % MAXITEMS;  // wrap
    count--;
    return n;
}