#include <stdio.h>
#include "sum.h"

int main (void)
{
    int a, b;

    printf("Enter two variables\n");
    scanf("%d%d", &a, &b);

    printf("%d", sum(a,b));

    return 0 ;
}