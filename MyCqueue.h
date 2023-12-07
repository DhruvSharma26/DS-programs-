#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
#define SIZE 5
struct queue {
    char item[10];
    int FRONT;
    int REAR;
};
/****************************/
struct queue CQ;
/****************************/
void InitializeQueue(){
    CQ.REAR=SIZE;
    CQ.FRONT=SIZE;
}
/****************************/
int IsEmpty(){
    if(CQ.REAR==CQ.FRONT){
        return TRUE;
    }else{
        return FALSE;
    }
}
/****************************/
void EnQueue(char x){
    if((CQ.REAR+1)%SIZE==CQ.FRONT){
        printf("\n Queue Overflows !");
        exit(1);
    }else{
        CQ.REAR=(CQ.REAR+1)%SIZE;
        CQ.item[CQ.REAR]=x;
    }
}
/****************************/
char DeQueue(){
    char x;
    if(IsEmpty()){
        printf("\n Queue Underflows !");
        exit(1);
    }else{
        CQ.FRONT=(CQ.FRONT+1)%SIZE;
        int x=CQ.item[CQ.FRONT];
        return x;
    }
}
/****************************/
