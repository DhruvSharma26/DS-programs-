// #include <stdio.h>
//! MATRIX ADDITION
// void matrixAdd(int A[][10],int B[][10], int C[][10]){
//     int i,j,m,n;
//     scanf("%d%d",&n,&m);
//     for( i=0;i<n;i++){
//         for( j=0;j<m;j++){
//             scanf("%d",&A[i][j]);
//      }
//     }
//     for(i=0;i<n;i++){
//         for(j=0;j<m;j++){
//             scanf("%d",&B[i][j]);
//      }
//     }
//     for(i=0;i<n;i++){
//         for( j=0;j<m;j++){
//             C[i][j] = A[i][j]+B[i][j];
//      }
//     }
//     for( i=0;i<n;i++){
//         for(j=0;j<m;j++){
//             printf("%d  ",C[i][j]);
//      }
//     }
// }
//! MATRIX MULTIPLICATION
// void matrixMul(int A[][10],int B[][10], int C[][10]){
//     int i,j,k,m,n,p,q;
//     scanf("%d%d%d%d",&n,&m,&p,&q);
//     for( i=0;i<n;i++){
//         for( j=0;j<m;j++){
//             scanf("%d",&A[i][j]);
//      }
//     }
//     for(i=0;i<p;i++){
//         for(j=0;j<q;j++){
//             scanf("%d",&B[i][j]);
//      }
//     }
//     for(i=0;i<n;i++){
//         for( j=0;j<q;j++){
//             C[i][j]=0;
//             for(k=0;k<m;k++){
//             C[i][j] += A[i][k]*B[k][j];
//       }
//      }
//     }
//     for(i=0;i<n;i++){
//         for( j=0;j<q;j++){
//             printf("%d ",C[i][j]);
//      }
//     }
// }
//! MATRIX TRANSPOSE
// void matrixTranspose(int A[][10], int C[][10]){
//     int i,j,m,n;
//     scanf("%d%d",&n,&m);
//     for( i=0;i<n;i++){
//         for( j=0;j<m;j++){
//             scanf("%d",&A[i][j]);
//      }
//     }
//     for(i=0;i<n;i++){
//         for( j=0;j<m;j++){
//             C[j][i]=A[i][j];
//      }
//     }
//     for( i=0;i<n;i++){
//         for(j=0;j<m;j++){
//             printf("%d  ",C[i][j]);
//      }
//     }
// }
// void main(){
//     int A[10][10],B[10][10],C[10][10];
//  matrixAdd(A,B,C);
//  matrixMul(A,B,C);
// matrixTranspose(A,C);
// }

/******************************************************/
// #include <stdio.h>
// void main()
// {
//     int a[10][10], b[10][10], m, n;
//     scanf("%d%d", &m, &n);
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             scanf("%d", &a[i][j]);
//         }
//     }
//         for(int i=0;i<m;i++){
//             for(int j=0;j<n;j++){
//                 b[j][i]=a[i][j];
//             }
//         }
    //!  For clockwise rotation of matrix 90
    // for(int i=0;i<n;i++){
    //         int left=0;
    //         int right=m-1;
    //         while(left<right)
    //         {
    //         int temp=b[i][left];
    //         b[i][left]=b[i][right];
    //         b[i][right]=temp;
    //         left++;
    //         right--;
    //         }
    // }
    //! For anticlockwise rotation of matrix 90
    //         for(int j=0;j<m;j++){
    //             int up=0;
    //             int down=n-1;
    //             while(up<down){
    //             int temp=b[up][j];
    //             b[up][j]=b[down][j];
    //             b[down][j]=temp;
    //             up++;
    //             down--;
    //             }
    //         }
    
    //! Printing matrix
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             printf("%d\t", b[i][j]);
//         }
//         printf("\n");
//     }
// }
/************************************************************/
// #include<stdio.h>
// void main(){
//     int a[10][10], m, n;
//     scanf("%d%d", &m, &n);
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             scanf("%d", &a[i][j]);
//         }
//     }
    //! For clockwise rotation of matrix 180
    // for(int i=0;i<m;i++){
    //     int left=0;
    //     int right=n-1;
    //     while(left<right)
    //         {
    //         int temp=a[i][left];
    //         a[i][left]=a[i][right];
    //         a[i][right]=temp;
    //         left++;
    //         right--;
    //         }
    // }
    // for(int j=0;j<n;j++){
    //             int up=0;
    //             int down=m-1;
    //             while(up<down){
    //             int temp=a[up][j];
    //             a[up][j]=a[down][j];
    //             a[down][j]=temp;
    //             up++;
    //             down--;
    //             }
    //         }
    //! For anticlockwise rotation of matrix 180
    //same as 180 clockwise rotation

/************************************************************/
//! Rotation 90 without transpose
    // #include<stdio.h>
    // void main(){
    // int a[10][10], m, n;
    // scanf("%d%d", &m, &n);
    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         scanf("%d", &a[i][j]);
    //     }
    // }
    // for(int i=0;i<n;i++){
    //     for(int j=m-1;j>=0;j--){
    //         printf("%d\t",a[j][i]);
    //     }
    //     printf("\n");
    // }
    // }