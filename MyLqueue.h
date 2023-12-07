#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
#define SIZE 100
struct queue {
    char item[10];
    int FRONT;
    int REAR;
};
/****************************/
struct queue Q;
/****************************/
void InitializeQueue(){
    Q.REAR=-1;
    Q.FRONT=0;
}
/****************************/
int IsEmpty(){
    if((Q.REAR-Q.FRONT+1)==0){
        return TRUE;
    }else{
        return FALSE;
    }
}
/****************************/
void EnQueue(char x){
    if(Q.REAR==SIZE-1){
        printf("\n Queue Overflows !");
        exit(1);
    }else{
        Q.REAR++;
        Q.item[Q.REAR]=x;
    }
}
/****************************/
char DeQueue(){
    char x;
    if(IsEmpty()){
        printf("\n Queue Underflows !");
        exit(1);
    }else{
        x=Q.item[Q.FRONT];
        Q.FRONT++;
        return x;
    }
}
/****************************/
