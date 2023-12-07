#include<stdio.h>
#include<stdlib.h>
struct node{
    int coef;
    int exp;
    struct node* next;
};
struct node *getnode()
{
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    return p;
}
/*********************************************************************/
void traverse(struct node *list)
{
    struct node *p;
    p = list;
    while (p != NULL)
    {
        printf("%dx^%d ", p->coef,p->exp);
        p = p->next;
        if(p!=NULL){
        printf("+ ");
        }
    }
    printf("\n");
}
/*********************************************************************/
void insertbegin(struct node **list, int c,int e)
{
    struct node *p;
    p = getnode();
    p->coef = c;
    p->exp = e;
    p->next = *list;
    *list = p;
}
/********************************/
void add_poly(struct node** poly1,struct node** poly2){
    struct node* p=*poly1;
    struct node* q=*poly2;
    struct node* poly3;
    poly3=NULL;
    while(p!=NULL && q!=NULL){
        if(p->exp==q->exp){
            insertbegin(&poly3,p->coef+q->coef,p->exp);
            p=p->next;
            q=q->next;
        }else{
            if(p->exp>q->exp){
                insertbegin(&poly3,p->coef,p->exp);
                p=p->next;
            }else{
                insertbegin(&poly3,q->coef,q->exp);
                q=q->next;
            }
        }
    }
    while(p!=NULL){
        insertbegin(&poly3,p->coef,p->exp);
        p=p->next;
    }
    while(p!=NULL){
        insertbegin(&poly3,q->coef,q->exp);
        q=q->next;
    }
    traverse(poly3);
}
/********************************/



/********************************/
void main(){
    struct node* poly1,*poly2;
    poly1=NULL;
    poly2=NULL;
    insertbegin(&poly1,3,2);
    insertbegin(&poly1,5,6);
    insertbegin(&poly1,4,2);
    insertbegin(&poly1,1,1);
    traverse(poly1);
    insertbegin(&poly2,-1,2);
    insertbegin(&poly2,4,8);
    insertbegin(&poly2,6,1);
    insertbegin(&poly2,2,7);
    traverse(poly2);
    add_poly(&poly1,&poly2);

}
