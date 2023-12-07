#include <stdio.h>
#include <stdlib.h>

struct node {
    int info;
    struct node* prev;
    struct node* next;
};

struct node* getnode() {
    struct node* p;
    p = (struct node*)malloc(sizeof(struct node));
    p->prev = NULL;
    p->next = NULL;
    return p;
}

void freenode(struct node* p) {
    free(p);
}

void insbeg(struct node** dstart, int x) {
    struct node* p;
    p = getnode();
    p->info = x;
    if (*dstart == NULL) {
        *dstart = p;
        p->next = p;
        p->prev = p;
    } else {
        p->next = *dstart;
        p->prev = (*dstart)->prev;
        (*dstart)->prev->next = p;
        (*dstart)->prev = p;
        *dstart = p;
    }
}

void insEnd(struct node** dstart, int x) {
    struct node* p;
    p = getnode();
    p->info = x;
    if (*dstart == NULL) {
        *dstart = p;
        p->next = p;
        p->prev = p;
    } else {
        p->next = *dstart;
        p->prev = (*dstart)->prev;
        (*dstart)->prev->next = p;
        (*dstart)->prev = p;
    }
}

void insaft(struct node* p, int x) {
    if (p != NULL) {
        struct node* q;
        q = getnode();
        q->info = x;
        q->next = p->next;
        q->prev = p;
        p->next->prev = q;
        p->next = q;
    } else {
        printf("VOID INSERTION");
    }
}

void insbef(struct node* p, int x) {
    if (p != NULL) {
        struct node* q;
        q = getnode();
        q->info = x;
        q->next = p;
        q->prev = p->prev;
        p->prev->next = q;
        p->prev = q;
    } else {
        printf("VOID INSERTION");
    }
}

void delbeg(struct node** dstart) {
    if (*dstart != NULL) {
        struct node* p = *dstart;
        if (p->next == p) {
            *dstart = NULL;
        } else {
            p->prev->next = p->next;
            p->next->prev = p->prev;
            *dstart = p->next;
        }
        freenode(p);
    }
}

void delend(struct node** dstart) {
    if (*dstart != NULL) {
        struct node* p = *dstart;
        if (p->next == p) {
            *dstart = NULL;
        } else {
            p->prev->next = p->next;
            p->next->prev = p->prev;
        }
        freenode(p);
    }
}

void delaft(struct node* p) {
    if (p != NULL && p->next != p) {
        struct node* q = p->next;
        p->next = q->next;
        q->next->prev = p;
        freenode(q);
    } else {
        printf("VOID DELETION");
    }
}

void delbef(struct node* p) {
    if (p != NULL && p->prev != p) {
        struct node* q = p->prev;
        p->prev = q->prev;
        q->prev->next = p;
        freenode(q);
    } else {
        printf("VOID DELETION");
    }
}

struct node* search(struct node* dstart, int x) {
    struct node* p = dstart;
    do {
        if (p->info == x) {
            return p;
        }
        p = p->next;
    } while (p != dstart);
    return NULL;
}

void traverse(struct node* dstart) {
    if (dstart != NULL) {
        struct node* p = dstart;
        do {
            printf("%d ", p->info);
            p = p->next;
        } while (p != dstart);
    }
}

int main() {
    struct node* dstart;
    dstart = NULL;
    struct node* p;
    insbeg(&dstart, 10);
    insbeg(&dstart, 20);
    insbeg(&dstart, 30);
    insbeg(&dstart, 40);
    insbeg(&dstart, 50);
    insbeg(&dstart, 60);
    p = search(dstart, 60);
    delbef(p);

    traverse(dstart);

    return 0;
}

