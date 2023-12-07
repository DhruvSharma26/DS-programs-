#include<stdio.h>
int dh(int table[],int ts,int x){
    int h=x%ts;
    int flag=1;
    if(table[h]==0){
        table[h]=x;
    }else{
        flag=0;
        int hdash=(2*x-7)%ts;
        int i=1;
        while(flag==0){
            int np=(h+(i*hdash))%ts;
            i++;
            if(table[np]==0){
                table[np]=x;
                flag=1;
            }
        }
    }
    return flag;
}
int main() {
    int key, table_size, n, x;
    printf("Enter table size: ");
    scanf("%d", &table_size);
    
    int table[15] = {0};  
    
    printf("Enter number of elements to store: ");
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        dh(table, table_size, x);
    }

    for (int i = 0; i <= table_size - 1; i++) {
        printf("%d ", i);
    }
    printf("\n");
    for (int i = 0; i <= table_size - 1; i++) {
        printf("-----");
    }
    printf("\n");
    for (int i = 0; i <= table_size - 1; i++) {
        printf("%d ", table[i]);
    }

    return 0;
}
