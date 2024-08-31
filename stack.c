#include <stdio.h>
int stack[100], top, i, choice, n, x;
void push(void);
void pop(void);
void display(void);
int main()
{
    top = -1;
    printf("enter size of stack");
    scanf("%d", &n);
    printf("choice \n 1.push\n 2.pop\n 3.display\n ");
    do
    {
        printf("\nenter choice\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            push();
            break;
        }
        case 2:
        {
            pop();
            break;
        }
        case 3:
        {
            display();
            break;
        }
        case 4:
        {
            printf("\nexit point");
            break;
        }
        default:
        {
            printf("invalid choice \n");
        }
        }
    } while (choice != 4);
    return 0;
}
void push()
{
    if (top >= n - 1)
    {
        printf("\n\tSTACK is over flow");
    }
    else
    {
        printf(" Enter a value to be pushed:");
        scanf("%d", &x);
        scanf("%d", &x);
        top++;
        stack[top] = x;
    }
}
void pop()
{
    if (top == -1)
    {
        printf("underflow condition");
    }
    else
    {
        printf("popes element is %d", stack[top]);
        top--;
    }
}
void display()
{
    if (top > 0)
    {
        printf("elements of stack are \n");
        for (i = 0; i <= top; i++)
        {
            printf("\n%d", stack[i]);
        }
    }
    else
    {
        printf("stack is empty");
    }
}