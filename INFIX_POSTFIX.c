#include <stdio.h>
#include "Mystack.h"
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
void InfixToPostfix(char infix[])
{
    int i = 0, j = 0;
    char symb, x;
    struct stack s;
    initialize(&s);
    char postfix[100];

    while (infix[i] != '\0')
    {
        symb = infix[i];
        i++;

        if (symb >= 'a' && symb <= 'z' || symb>='0' && symb<='9')
        {
            postfix[j] = symb;
            j++;
        }
        else
        {
            while (!IsEmpty(&s) && prcd(StackTop(&s), symb))
            {
                x = pop(&s);
                postfix[j] = x;
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
        postfix[j] = x;
        j++;
    }

    postfix[j] = '\0';
    printf("%s", postfix);
}
void main()
{
    char infix[] = "(a+b)^3-(c+d)^3";
    InfixToPostfix(infix);
}