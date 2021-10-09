#include <iostream>
using namespace std;

int power(int m , int n)
{
    int i ;

    for ( i = 1 ; i < n ; i++ )
        m *= m ;
    return m ;
}

int main (void)
{
    int t ;
    int n ;

    cout << "Enter the value of t and n" << endl;
    cin >> t >> n;

    cout << "M raise to n = "<< power(t,n);

    return 0 ;
}