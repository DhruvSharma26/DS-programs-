#include<stdio.h>
void traverse(int A[],int n){
    for(int i=0;i<n;i++){
        printf("%d  ",A[i]);
    }
    printf("\n");
}
//! Merging arrays
// void mergeArray(int A[],int n,int B[],int m){
//     int C[m+n];
//     int i=0,j=0,k=0;
//     while(i<n && j<m){
//         if(A[i]<B[j]){
//            C[k]=A[i];
//            k++;
//            i++; 
//         }else{
//             C[k]=B[j];
//             k++;
//             j++;
//         }
//     }
//     while(i<n){
//         C[k]=A[i];
//         i++;
//         k++;
//     }
//     while(j<m){
//         C[k]=B[j];
//         k++;
//         j++;
//     }
//     printf("merged array => \n");
//     traverse(C,k);
// }
//! Union of arrays
// void UnionOfArray(int A[],int n,int B[],int m){
//     int C[m+n];
//     int i=0,j=0,k=0;
//     while(i<n && j<m){
//         if(A[i]<B[j]){
//            C[k]=A[i];
//            k++;
//            i++; 
//         }
//         else{
//             if(B[j]<A[i]){
//             C[k]=B[j];
//             j++;
//             k++;
//             }
//             else{
//                 C[k]=A[i];
//                 i++;
//                 j++;
//                 k++;
//             }
//         }
//     }
//     while(i<n){
//         C[k]=A[i];
//         i++;
//         k++;
//     }
//     while(j<m){
//         C[k]=B[j];
//         k++;
//         j++;
//     }
//     printf("the union is => \n");
//     traverse(C,k);
// }
//! Intersection of arrays
// void IntersectionOfArray(int A[],int n,int B[],int m){
//     int C[m+n];
//     int i=0,j=0,k=0;
//     while(i<n && j<m){
//         if(A[i]<B[j]){
//            i++; 
//         }
//         else{
//             if(B[j]<A[i]){
//             j++;
//             }
//             else{
//                 C[k]=A[i];
//                 i++;
//                 j++;
//                 k++;
//             }
//         }
//     }
//     printf("the intersection is => \n");
//     traverse(C,k);
// }
//! Difference of arrays
// void DifferenceOfArray(int A[],int n,int B[],int m){
//     int C[m+n];
//     int i=0,j=0,k=0;
//     while(i<n && j<m){
//         if(A[i]<B[j]){
//            C[k]=A[i];
//            k++;
//            i++; 
//         }else{
//             if(B[j]<A[i]){
//                 j++;
//             }else{
//             i++;
//             j++;
//             }
//         }
//     }
//     while(i<n){
//         C[k]=A[i];
//         i++;
//         k++;
//     }
//     printf("difference of array A - B => \n");
//     traverse(C,k);
// }
//! Symmetric difference of arrays
// void SymmetricDifferenceOfArray(int A[],int n,int B[],int m){
//     int C[m+n];
//     int i=0,j=0,k=0;
//     while(i<n && j<m){
//         if(A[i]<B[j]){
//            C[k]=A[i];
//            k++;
//            i++; 
//         }else{
//             if(B[j]<A[i]){
//                 C[k]=B[j];
//                 j++;
//                 k++;
//             }else{
//             i++;
//             j++;
//             }
//         }
//     }
//     while(i<n){
//         C[k]=A[i];
//         i++;
//         k++;
//     }
//     while(j<m){
//         C[k]=B[j];
//         k++;
//         j++;
//     }
//     printf("symmetric Difference of array is => \n");
//     traverse(C,k);
// }
//! Main function
// void main(){
//     int A[]={2,4,6,8,10,12};
//     int B[]={1,2,3,5,6,7,9,11};
//     int n=6;
//     int m=6;
//     traverse(A,n);
//     traverse(B,m);
//     mergeArray(A,n,B,m);
//     UnionOfArray(A,n,B,m);
//     IntersectionOfArray(A,n,B,m);
//     DifferenceOfArray(A,n,B,m);
//     SymmetricDifferenceOfArray(A,n,B,m);
// }