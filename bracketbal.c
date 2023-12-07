// #include<stdio.h>
// #include"Mystack.h"
// void IsValidExpression(char str[]){
//     struct stack s;
//     initialize(&s);
//     int i=0,flag=1;
//     while(str[i] != '\0'){
//     char x=str[i];
//     i++;
//     if(x=='('){
//         push(&s,x);
//     }else{
//         if(!IsEmpty(&s)){
//             pop(&s);
//         }else{
//             flag=0;
//             break;
//         }
//     }
//     }
//     if(IsEmpty(&s)){
//         if(flag==1){
//             printf("valid");
//         }else{
//             printf("Invalid");
//         }
//     }else{
//         printf("Invalid");
//     }
//     }
/****************************************************/
// void IsValidExpression1(char str[]){
//      struct stack s;
//     initialize(&s);
//     int i=0,flag=1;
//     while(str[i] != 0){
//     char x=str[i];
//     i++;
//     if(x=='(' || x=='{' || x=='['){
//         push(&s,x);
//     }else if(x==')' || x=='}' || x==']'){
//         if(!IsEmpty(&s)){
//             char popped=pop(&s);
//             if((x==')' && popped=='(') || (x=='}' && popped=='{') || (x==']' && popped=='[')){
//                 flag=1;
//             }
//         }else{
//             flag=0;
//             break;
//         }
//     }
//     }
//     if (IsEmpty(&s) && flag == 1) {
//         printf("Valid");
//     } else {
//         printf("Invalid");
//     }

// }
// void main(){
//     char str[20];
//     printf("enter an expression\n");
//     scanf("%s",str);
//     IsValidExpression1(str);
// }
/****************************************************/

