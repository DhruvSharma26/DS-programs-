#include<stdio.h>
//     /*****************/
    void traverse(int *a,int n){
        for(int i=0;i<n;i++){
            printf("%d ",a[i]);
        }
    }
//     /*****************/
//     void RepeatingNonRepeatingNumbers(int *a,int n){
//         int DAT[10]={0};
//         int x;
//         for(int i=0;i<n;i++){
//             x=a[i];
//             DAT[x]++;
//         }
//         for(int i=0;i<10;i++){
//             printf("%d: %d\n",i,DAT[i]);
//         }
//     }
//     /*****************/
//     void InsertNumberInArray(int* a,int n){
//         int pos=2;
//         int num=8;
//         n++;
//         for(int i=n-1;i>=pos;i--){
//             a[i]=a[i-1];
//         }
//             a[pos-1]=num;
//              //print updated array
//             for (int i = 0; i < n; i++){
//         printf("%d ", a[i]);
//         }
//     }    

//     /*****************/
// void del(int arr[],int x,int n)
// {
//     int pos;
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]==x)
//         {
//             pos=i;
//             break;
//         }
//     }
//     for(int i=pos;i<n-1;i++)
//     {
//         arr[i]=arr[i+1];
//     }
//     for(int i=0;i<n-1;i++)
//     {
//         printf("%d ",arr[i]);
//     }
// }

//     /*****************/
    int main(){
        int x[20];
        int i;
        printf("enter numbers : \n");
        for(i=0;i<5;i++){
            scanf("%d",&x[i]);
        }
        traverse(x,5);
         //InsertNumberInArray(x,5);
        //del(x,3,5);
    return 0;
    }
//     /*****************/
// void REPEATING(){
//     int arr[]={3,4,4,5,6,7,7,9,9,0};
//     for(int i=0;i<10;i++){
//         for(int j=i+1;j<10;j++){
//             if(arr[i]==arr[j]){
//                 printf("%d\n",arr[j]);
//             }
//         }
//     }
// }
       /*****************/

