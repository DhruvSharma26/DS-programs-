#include<stdio.h>
//! Modular Exponentiation
// #define m 1000
//     long long power(int n,int a){
//         if(a==0){
//             return 1;
//         }else{
//             long long p=power(n,a/2)%m;
//             if(a%2==0){
//                 return (p*p)%m;
//             }else{
//                 return (((n*p)%m)*p)%m;
//             }
//         }
//     }
        //! Binary Exponent
    // long long power(int n,int a){
    //     if(a==0){
    //         return 1;
    //     }else{
    //         long long p=power(n,a/2);
    //         if(a%2==0){
    //             return p*p;
    //         }else{
    //             return p*p*n;
    //         }
    //     }
    // }

    /*********************************************************/
    void matrix_mul(long long f[2][2],long long m[2][2]){
        long long a,b,c,d;
        a=f[0][0]*m[0][0] + f[0][1]*m[1][0];
        b=f[0][0]*m[0][1] + f[0][1]*m[1][1];
        c=f[1][0]*m[0][0] + f[1][1]*m[1][0];
        d=f[1][0]*m[0][1] + f[1][1]*m[1][1];

        f[0][0]=a;
        f[0][1]=b;
        f[1][0]=c;
        f[1][1]=d;
    }
    void power(long long f[2][2],long long n){
        if(n==0 || n==1){
            return;
        }else{
            long long m[2][2]={1,1,1,0};
            power(f,n/2);
            matrix_mul(f,f);
            if(n%2!=0){
                matrix_mul(f,m);
            }
        }
    }
    long long fib(long long n){
        long long f[2][2]={1,1,1,0};
        if(n==0){
            return 0;
        }else{
        power(f,n-1);
        return f[0][0];
        }
    }

    /*********************************************************/
    int main(){
        long long n;
        scanf("%lld",&n);
        printf("%lld",fib(n));
        return 0;
    }