#include<stdio.h>
int is_prime(int num) {
    if (num <= 1) {
        return 0; 
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; 
        }
    }
    return 1; 
}
int NearestPrime(int num){
    for(int i=num-1;i>=0;i--){
        if(is_prime(i)==1){
            return i;
        }
    }
}
int DivHash(int key,int table_size){
    int nearest_prime = NearestPrime(table_size);
    int location = key % nearest_prime;
    return location;
}
void main(){
    int key,table_size;
    printf("enter key and table size : ");
    scanf("%d%d",&key,&table_size);
    int z = DivHash(key,table_size);
    printf("the required location is : %d",z);
}