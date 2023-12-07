#include <stdio.h>
#include "Mystack.h"
#include <stdlib.h>
int main()
{

  initialize(&s);
  initialize(&s1);

  push(&s, 7);
  push(&s, 5);
  push(&s, 12);
  push(&s, 17);
  push(&s, 16);
  push(&s, 11);
  push(&s, 10);
  int x;
  int min = StackTop(&s);
  while (!IsEmpty(&s))
  {
    x = pop(&s);
    if (x < min)
    {
      min = x;
    }
  }
  while (!IsEmpty(&s1))
  {
    x = pop(&s1);
    push(&s, x);
  }
  printf("the minimum element is : %d", min);
  return 0;
}
