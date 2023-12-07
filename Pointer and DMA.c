#include<stdio.h>
#include<stdlib.h>
void display(int *a,int n){
    int *t=a;
    for(int i=0;i<9;i++){
    printf("%d ",*(t+i));
    }
}
void main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    display(arr,9);

    // int *t;
    // int n;
    // scanf("%d",&n);
    // t=(int *)malloc(n*sizeof(int));
    // for(int i=0;i<n;i++){
    //     scanf("%d",(t+i));
    // }
    // for(int i=0;i<n;i++){
    //     printf("%d ",*(t+i));
    // }
}

