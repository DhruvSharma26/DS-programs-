#include <stdio.h>
#include <math.h>

int NumberOfDigits(int num) {
    int rem, c = 0;
    while (num > 0) {
        rem = num % 10;
        c++;
        num /= 10;
    }
    return c;
}

int MidSquareHash(int key, int k) {
    int n = NumberOfDigits(key);
    int d = (2*n-2)/2;
    int X = (key*key)/(pow(10,d));
    int l=X%k;
}

int main() {
    int key, table_size;
    printf("Enter key and table size: ");
    scanf("%d %d", &key, &table_size);
    int z = MidSquareHash(key,table_size);
    printf("The required location is: %d", z);
    return 0;
}
