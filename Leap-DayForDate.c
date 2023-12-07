#include<stdio.h>
void main(){
    //! LEAP YEAR WITHOUT LOGICAL OPERATORS
    // int year;
    // scanf("%d",&year);
    // if(year%4==0){
    //     if(year%100==0){
    //         if(year%400==0){
    //             printf("leap year");
    //         }else{
    //             printf("not leap year");
    //         }  
    //     }else{
    //         printf("leap year");
    //     }
    // }else{
    //     printf("not leap year");
    // }
    //! DAY FOR A DATE
    // int d,m,y;
    // scanf("%d%d%d",&d,&m,&y);
    // int totalYears = y-1;
    // int leapYears = (totalYears/4)-(totalYears/100)+(totalYears/400);
    // int totalDays = totalYears*365+leapYears;
    // int months[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    // for(int i=1;i<=m-1;i++){
    //     totalDays += months[i];
    // }
    // totalDays += d;
    // if(m>2){
    //     if(y%4==0 && y%100!=0 || y%400==0){
    //         totalDays +=1;
    //     }
    // }
    // int rem = totalDays%7;
    // switch(rem){
    //     case 0: printf("sunday");
    //     break;
    //     case 1: printf("monday");
    //     break;
    //     case 2: printf("tuesday");
    //     break;
    //     case 3: printf("wednesday");
    //     break;
    //     case 4: printf("thrusday");
    //     break;
    //     case 5: printf("friday");
    //     break;
    //     case 6: printf("saturday");
    //     break;
    // }
}
