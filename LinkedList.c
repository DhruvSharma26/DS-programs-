#include <stdio.h>
#include <stdlib.h>
#include "MyLinkedList.h"
void main()
{
    struct node *start;
    start = NULL;
    // insertbegin(10);
    // insertbegin(22);
    // insertbegin(3);
    // insertbegin(40);
    // insertend(67);
    // insertend(31);
    // insertend(89);
    // int m=count();
    // printf("No. of elements in LinkedList are : %d\n",m);
    // countevenodd();
    // traverse();
    // printf("\n");
    // delBeg();
    // delEnd();
    // traverse();
    // printf("\nmiddle node is the one which have data : %d\n",middle_elementM1());
    // printf("middle node is the one which have data : %d\n",middle_elementM2());
    // deletionAtAnyPosition(67);
    // reverse();
    // traverse();
    insertbegin(&start,10);
    insertbegin(&start,22);
    insertbegin(&start,3);
    insertbegin(&start,40);
    insertend(&start,67);
    insertend(&start,31);
    insertend(&start,89);
    // struct node* p=search(&start,89);
    // struct node* q=search(&start,67);
    // p->next = q;
    cycleDetection(start);
    traverse(start);
    int z = startOfCycle(&start);
    printf("%d\n",z);

}