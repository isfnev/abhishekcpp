#include <iostream>
using namespace std;

int sum (int* a, int n)
{
    if ( n == 0 )
        return 0 ;

    return *a + sum(a+1, n -1 );
}

int main (void)
{
    int n = 25 ;
    int a[n] ;
    int i ;

    cout <<"Enter " << n << " elements in the array" << endl;
    for ( i = 0 ; i < n ; i++ )
        cin >> a[i];

    cout << sum(a, n);
    return 0 ;
}