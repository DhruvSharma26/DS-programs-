#include<stdio.h>
#include<stdlib.h>
#include"MyLqueue.h"
/**********************************************/
int main(){
    InitializeQueue();
    EnQueue('A');
    EnQueue('B');
    EnQueue('C');
    char z= DeQueue();
    printf("\n THE DELETED ITEM IS : %c",z);
    z= DeQueue();
    printf("\n THE DELETED ITEM IS : %c",z);
    z= DeQueue();
    printf("\n THE DELETED ITEM IS : %c",z);
    z= DeQueue();
    printf("\n THE DELETED ITEM IS : %c",z);
    return 0;

}