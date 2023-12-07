#include <stdio.h>
#include "MyLinkedList.h"

void delAllElements(struct node **list, int x) {
  struct node *p;
  struct node *q;
  p = *list;
  q = NULL;

  while (p != NULL) {
    if (p->info == x) {
      struct node* temp=p;
      p = p->next;
      if (q == NULL) {
        delBeg(list);
      } else {
        deleteafter(list, temp);
      }
    } else {
      q = p;
      p = p->next;
    }
  }
}

int main() {
  struct node *list;
  list = NULL;
  insertbegin(&list, 3);
  insertbegin(&list, 4);
  insertbegin(&list, 2); 
  delAllElements(&list, 3);
  traverse(list);
  return 0;
}
