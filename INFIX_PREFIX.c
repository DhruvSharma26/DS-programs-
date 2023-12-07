#include <stdio.h>
#include "Mystack.h"
#include<string.h>
int prcd(char a, char b)
{
    if (a == '(')
        return 0;
    else
    {
        if (b == '(')
            return 0;
        else
        {
            if (b == ')')
                return 1;
            else
            {

                if ((a == '^' || a == '*' || a == '/' || a == '%'))
                {
                    if (b == '^')
                    {
                        return 0;
                    }
                    else
                    {
                        return 1;
                    }
                }
                else
                {
                    if (b == '+' || b == '-')
                    {
                        return 1;
                    }
                    else
                    {
                        return 0;
                    }
                }
            }
        }
    }
}
void InfixToPrefix(char infix[])
{
    strrev(infix);
    int i = 0, j = 0;
    char symb, x;
    struct stack s;
    char prefix[100];
    initialize(&s);

    while (infix[i] != '\0')
    {
        symb = infix[i];
        i++;

        if ((symb >= 'a' && symb <= 'z')|| (symb>='0' &&symb<='9'))
        {
            prefix[j] = symb;
            j++;
        }
        else
        {
            while (!IsEmpty(&s) && !prcd(symb,StackTop(&s)))
            {
                x = pop(&s);
                prefix[j] = x;
                j++;
            }
            if (symb != ')')
            {
                push(&s, symb);
            }
            else
            {
                pop(&s);
            }
        }
    }
    while (!IsEmpty(&s))
    {
        x = pop(&s);
        prefix[j] = x;
        j++;
    }
     prefix[j] = '\0';
    strrev(prefix);
    printf("%s", prefix);
}
void main()
{
    char infix[] = "a+b*c/d";
    InfixToPrefix(infix);
}