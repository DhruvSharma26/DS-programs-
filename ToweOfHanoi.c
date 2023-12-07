//! Tower of Hanoi
     void towerOfHanoi(int n, char src, char helper, char dest) {
        if(n==1){
            printf("transfer disc %d from %c to %c\n",n, src, dest);
            return;
        }
        towerOfHanoi(n-1, src, dest, helper);
        printf("transfer disc %d from %c to %c\n",n, src, dest);
        towerOfHanoi(n-1, helper, src, dest);
    }
    void main(){
        int n;
        printf("enter no. of disks\n");
        scanf("%d",&n);
        towerOfHanoi(n,'S','H','D');
    }