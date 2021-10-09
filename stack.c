#include <stdio.h>
#define MAX 10
int top = -1 ;

int pop (int* a)
{
    if ( top == -1 )
    {
        printf("There is no element in the stack\n");
        return 0 ;
    }
    printf("poped element is : %d\n", a[top--]);
}

int peek (int *p)
{
    if ( top == -1 )
    {
        printf("Stack is empty\n");
        return 0 ;
    }
    printf("peeked element is : %d\n", p[top]);
}

int display (int *p)
{
    int i ;

    if ( top == -1 )
    {
        printf("Stack is empty\n");
        return 9 ;
    }

    printf("Displaying the stack below\n");

    for ( i = top ; i != -1 ; i-- )
        printf("%d ", p[i]);

    printf("\n");

    return 0 ;
}

int push (int *p)
{
    if ( top == MAX - 1 )
    {
        printf("The stack is full\n");
        return 9 ;
    }

    int value ;

    printf("Enter a integer value to store\n");
    scanf("%d", &value);

    p[++top] = value ;

    return 0 ;
}

int main (void)
{
    int a[MAX] ;
    int option ;

    do
    {
        printf("Enter 1 for push\nEnter 2 for peek\nEnter 3 for display\nEnter 4 for pop\nEnter 0 for exiting the loop\n");
        scanf("%d", &option);

        switch(option)
        {
            case 1 : push(a)   ;
                     break     ;
            case 2 : peek(a)   ;
                     break     ;
            case 3 : display(a);
                     break     ;
            case 4 : pop(a)    ;
                     break     ;
            case 0 : printf("Program is ending\n");
                     return 0 ;
        }

    }while(1);

    return 0 ;
}