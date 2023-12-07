#include<stdio.h>
#include"Mystack.h"
int power(int a,int b){
    if(b==0){
        return 1;
    }else{
        return a*power(a,b-1);
    }
}
int find(int a,int b,char op){

    switch(op){
        case '+':return a+b;
        case '-':return a-b;
        case '*':return a*b;
        case '/':return a/b;
        case '^':return power(a,b);
    }
}
int evaluate(char exp[]){
    struct stack s;
    int a,b,value,answer;
    initialize(&s);
    int i=0;
    while(exp[i]!='\0'){
        char symb=exp[i];
        i++;
        if(symb>='0' && symb<='9'){
            push(&s,symb-'0');
        }else{
            b=pop(&s);
            a=pop(&s);
            value=find(a,b,symb);
            push(&s,value);
        }
    }
    answer=StackTop(&s);
    return answer;
}
void main(){
    char exp[20];
    printf("\nenter an expression\n");
    scanf("%s",exp);
    printf("the answer is %d",evaluate(exp));
}


