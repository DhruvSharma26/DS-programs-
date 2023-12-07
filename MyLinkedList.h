#include<stdio.h>
#include<stdlib.h>
struct node{
    int info;
    struct node *next;
};

struct node *getnode(){
    struct node *p;
    p=(struct node *)malloc(sizeof(struct node));
    return p;
}
/*********************************************************************/
void freenode(){
    struct node *p;
    free(p);
}
/*********************************************************************/
void traverse(struct node* list){
    struct node *p;
    p=list;
    while(p!=NULL){
        printf("%d ",p->info);
        p=p->next;
    }
}
/*********************************************************************/
void insertbegin(struct node** list,int x){
    struct node *p;
    p=getnode();
    p->info=x;
    p->next=*list;
    *list=p;
}
/*********************************************************************/
void deletionOfElement(struct node** list,int x) {
    struct node *p = *list;
    struct node *q = NULL;
    if (p == NULL) {
        printf("The linked list is empty.\n");
        return;
    } else {
        while (p != NULL) {
            if (p->info == x) {
                if (q == NULL) {
                    *list = p->next;
                } else {
                    q->next = p->next;
                }
                free(p);
                return;
            }
            q = p;
            p = p->next;
        }
    }
}
/*********************************************************************/
void insertionOfElement(struct node** list,int n,int x) {
    struct node *p;
    struct node *q;
    struct node *r;
    r=getnode();
    int c=1;
    p=*list;
    if(n==1){
        p=p->next;
        r->info=x;
        r->next=p;
        *list=r;
    }else{
        while(c!=n){
            q=p;
            p=p->next;
            c++;
        }
        r->info=x;
        q->next=r;
        r->next=p;
    }
}
/*********************************************************************/
void insertafter(struct node **list,int x){
    struct node *q;
    struct node *p;
    struct node *r;
    q=p->next;
    r=getnode();
    r->info=x;
    p->next=r;
    r->next=q;
}
/*********************************************************************/
void insertend(struct node** list,int x){
    struct node *p;
    struct node *q;
    p=*list;
    while(p->next!=NULL){
        p=p->next;
    }
    q=getnode();
    q->info=x;
    q->next=NULL;
    p->next=q;
}
/*********************************************************************/
int count(struct node* list){
    int c=0;
    struct node *p;
    p=list;
    while(p!=NULL){
        c++;
        p=p->next;
    }
    return c;
}
/*********************************************************************/
int countevenodd(struct node* list){
    int ce=0,co=0;
    struct node *p;
    p=list;
    while(p!=NULL){
        if((p->info)%2==0){
            ce++;
        }
        else{
            co++;
        }
        p=p->next;
    }
    printf("No. of even elements are : %d and odd elements are : %d\n",ce,co);
}
/*********************************************************************/
void pairwiseswap(struct node** list){
    struct node *p;
    struct node *q;
    p=*list;
    q=(*list)->next;
    while(p!=NULL && q!=NULL){
        int t=p->info;
        p->info=q->info;
        q->info=t;
        p=p->next->next;
        q=q->next;
        if(q!=NULL){
          q=q->next;
        }

    }
}
/*********************************************************************/
int delBeg(struct node** list){
    struct node *p;
    if(*list==NULL){
        printf("VOID DELETION");
    }else{
        p=*list;
        *list = (*list) ->next;
        int x= p->info;
        freenode();
        return x;

    }
}
/*********************************************************************/
int delEnd(struct node** list){
    struct node *p;
    struct node *q;
    if(*list==NULL){
        printf("VOID DELETION");
    }else{
        p=*list;
        q=NULL;
        while(p->next != NULL){
            q=p;
            p=p->next;
        }
        if(q!=NULL){
            q->next=NULL;
        }else{
        *list == NULL;
        int x= p->info;
        freenode();
        return x;
        }
    }
}
/*********************************************************************/
int middle_elementM1(struct node* list){
    struct node *t;
    struct node *r;
    t=list;
    r=list->next;
    while(r!=NULL && r->next!=NULL){
        t=t->next;
        r=r->next->next;
    }
    return (t->info);
}
/*********************************************************************/
int middle_elementM2(struct node* list){
    struct node *p;
    int c = count(list);
    p=list;
    for(int i=0;i<(c-1)/2;i++){
        p=p->next;
    }
    return p->info;
}
/*********************************************************************/
int reverse(struct node** list){
    struct node *p;
    struct node *c;
    struct node *n;
    p=NULL;
    c=*list;
    n=(*list)->next;
    while(c!=NULL){
        c->next = p;
        p=c;
        c=n;
        if(n!=NULL){
        n=n->next;
        }
        *list=p;
    }

}
/*********************************************************************/
struct node* search(struct node** list,int x){
    struct node* p;
    p=*list;
    while(p!=NULL){
        if(p->info==x){
            return p;
        }else{
            p=p->next;
        }
    }
}
/*********************************************************************/
void cycleDetection(struct node* list){
    struct node *t;
    struct node *r;
    t=list;
    r=(list)->next;
    while(r!=NULL && r->next!=NULL){
        t=t->next;
        r=r->next->next;
        if(t==r){
            printf("yes !");
            return;
        }
    }
    printf("No !");
    return;
}
/*********************************************************************/
int lengthOfCycle(struct node* list){
    struct node* t;
    struct node* r;
    t=list;
    r=(list)->next;
    while(r!=NULL && r->next !=NULL){
        t=t->next;
        r=r->next->next;
        if(t==r){
            break;
        }
    }
    int count =1;
    r=r->next;
    while(r!=t){
        r=r->next;
        count++;
    }
    return count;
}
/*********************************************************************/
int startOfCycle(struct node** list){
    struct node* t;
    struct node* r;
    t = *list;
    r = *list;
    while(r != NULL && r->next != NULL){
        t = t->next;
        r = r->next->next;
        if(t == r){
            t = *list;  // Reset one pointer to the beginning
            while(t != r){
                t = t->next;
                r = r->next;
            }
            return t->info;  // Return the start of the cycle
        }
    }
    return -1;  // No cycle found
}

/**********************************************************************/