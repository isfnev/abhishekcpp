#include <iostream>
using namespace std ;

int fibonacci(int F, int S, int N)
{
    if ( N )
        return 0 ;

    int temp ;
    temp = F + S ;

    cout << F << " ";
    fibonacci(S, temp, N-1);
}

int main (void)
{
    int f = 1 ;
    int s = 0 ;
    int n ;

    cout << "Enter the count of fibonacci series should be printed" << endl ;
    cin >> n ;

    fibonacci(f, s, n);

    return 0 ;
}