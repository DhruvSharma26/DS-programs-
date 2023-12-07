#include<stdio.h>
#include<stdlib.h>
/**********************************/
struct node {
    int info;
    struct node* next;
};
/**********************************/
struct node *getnode() {
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    return p;
}
/**********************************/
void insbeg(struct node **cstart, int x) {
    struct node *p = getnode();
    p->info = x;

    if (*cstart != NULL) {
        p->next = (*cstart)->next;
        (*cstart)->next = p;
    } else {
        p->next = p;
        *cstart = p;
    }
}
/**********************************/
void insend(struct node **cstart, int x) {
    struct node *p = getnode();
    p->info = x;

    if (*cstart != NULL) {
        struct node *q = (*cstart)->next;
        (*cstart)->next = p;
        p->next = q;
        *cstart = p;
    } else {
        p->next = p;
        *cstart = p;
    }
}
/**********************************/
void traverse(struct node *cstart) {
    struct node *p = cstart;

    if (cstart != NULL) {
        do {
            printf("%d--->", p->info);
            p = p->next;
        } while (p != cstart);
        printf("\n");
    } else {
        printf("List is empty.\n");
    }
}
/**********************************/
void insafter(struct node **p, int x) {
    struct node* q;
    struct node* r;
    q=getnode();
    q->info=x;
    r=(*p)->next;
    (*p)->next=q;
    q->next=r;
}
/**********************************/
int sumofallnode(struct node* cstart) {
    struct node* p = cstart;
    int sum = 0;

    if (cstart != NULL) {
        do {
            sum += p->info;
            p = p->next;
        } while (p != cstart);
    }

    return sum;
}
/*********************************/
void sumexceptitself(struct node* cstart) {
    struct node* p = cstart;
    int totalSum = sumofallnode(cstart);

    if (cstart != NULL) {
        do {
            printf("%d--->", totalSum - p->info);
            p = p->next;
        } while (p != cstart);
        printf("\n");
    } else {
        printf("List is empty.\n");
    }
}

/**********************************/
int main() {
    struct node *cstart = NULL;
    insbeg(&cstart, 10);
    insbeg(&cstart, 20);
    insbeg(&cstart, 30);
    insbeg(&cstart, 40);
    insbeg(&cstart, 50);
    insbeg(&cstart, 60);
    insend(&cstart, 120);
    struct node* p=cstart->next;
    while(p->info!=50){
        p=p->next;
    }
    insafter(&p,300);
    traverse(cstart);
    int z = sumofallnode(cstart);
    printf("%d\n",z);

    sumexceptitself(cstart);

    return 0;
}