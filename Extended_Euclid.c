#include<stdio.h>
// int euclid(int a,int b){
//     if(b==0){
//         return a;
//     }else{
//         return euclid(b,a%b);
//     }
// }
// void main(){
//     int z =euclid(4,8);
//     printf("%d",z);
// }
/**************************************/
#include <stdio.h>

struct triplet {
    int x, y, g;
};

struct triplet ans, intans;

struct triplet ee(int a, int b) {
    if (b == 0) {
        ans.x = 1;
        ans.y = 0;
        ans.g = a;
    } else {
        intans = ee(b, a % b);
        ans.x = intans.y;
        ans.y = intans.x - (a / b) * intans.y;
        ans.g = intans.g;
    }
    return ans;
}
/****************************************/
int mul_modulo_inv(int a,int m){
    struct triplet ans= ee(a,m);
    return ans.x;
}

int main() {
    struct triplet z = ee(8, 4);
    printf("%d ", z.x);
    printf("%d ", z.y);
    printf("%d\n", z.g);
    int a=19,m=2;
    int x = mul_modulo_inv(a,m);
    if(x<0){
    x=m+x;
    }
    printf("%d",x);
    return 0;
}

