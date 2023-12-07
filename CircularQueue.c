#include<stdio.h>
#include<stdlib.h>
#include"MyCqueue.h"

int main(){
    InitializeQueue();
    EnQueue('X');
    EnQueue('Y');
    EnQueue('Z');
    char z= DeQueue();
    printf("\n THE DELETED ITEM IS : %c",z);
    EnQueue('M');
    EnQueue('N');
    z= DeQueue();
    printf("\n THE DELETED ITEM IS : %c",z);
    EnQueue('P');
    EnQueue('Q');
    return 0;

}