#include <stdio.h>

void read_array(short*,short);
void delete(short*, short, short, short);
void print_array(short*, short);

int main (void)
{
    short n ;
    short p ;
    short d ;

    printf("Enter the limit of the element in the array\n");
    scanf("%hi", &n);

    short a[n];
    read_array(a,n);

    printf("Enter the position and quantity of elements to be deleted\n");
    scanf("%hi%hi", &p, &d);

    delete(a,p,d,n);
    n -= d ;

    print_array(a,n);

    return 0 ;
}

void read_array(short* p, short N)
{
    printf("Enter the elements of the array\n");

    for (  ; N ; N--, p++ )
        scanf("%d", p);
}

void delete(short* p, short m, short d, short N)
{
    int i ;

    for ( i = d ; i ; m++, i-- )
        p[m - 1] = p[m + d - 1] ;
}

void print_array(short* p, short N)
{
    for (  ; N ; N--, p++ )
        printf("%d ", *p);
}