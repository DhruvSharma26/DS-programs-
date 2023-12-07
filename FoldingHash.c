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

int FoldingHash(int key, int ts) {
    int n = key;
    int d = NumberOfDigits(ts - 1);
    int sum = 0;
    while (n != 0) {
        int r = n % (int)pow(10, d);
        sum += r;
        n /= 10;
    }
    int l = sum % ts;
    return l;  
}

int main() {
    int key, table_size;
    printf("Enter key and table size: ");
    scanf("%d %d", &key, &table_size);
    int z = FoldingHash(key, table_size);
    printf("The required location is: %d\n", z);
    return 0;
}
