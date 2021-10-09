#include <iostream>
using namespace std;

int factorial(int a)
{
    if( a == 1|| a == 0 )
        return 1 ;
        
    return a * factorial( a - 1 );
}

int main (void)
{
    int N ;

    cout << "The factorial of the number ";
    cin >> N;

    cout << "\b is " << factorial(N) << endl ;

    return 0 ;
}