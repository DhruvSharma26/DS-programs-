#include <stdio.h>
#include <stdlib.h>
#include "MyLinkedList.h"  

void initialize(struct node** top) {
    *top = NULL;
}

int isempty(struct node* top) {
    return (top == NULL);
}

void push(struct node** top, int x) {
    insertbegin(top, x);
}

int pop(struct node** top) {
    if (isempty(*top)) {
        printf("Stack underflows\n");
        exit(1);
    } else {
        int x = delBeg(top);
        return x;
    }
}

int stacktop(struct node* top) {
    if (isempty(top)) {
        printf("Stack is empty\n");
        exit(1);
    } else {
        return top->info;
    }
}

int main() {
    struct node* start;
    initialize(&start);
    push(&start, 100);
    push(&start, 200);
    push(&start, 300);
    push(&start, 400);
    push(&start, 500);
    push(&start, 600);

    printf("Popped element: %d\n", pop(&start));
    printf("Top of the stack: %d\n", stacktop(start));

    return 0;
}

