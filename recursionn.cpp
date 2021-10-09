#include <iostream>
using namespace std;

int num(int a)
{
    if ( a == 1 )
    {
        cout << a <<" ";
        return a ;
    }

    num(a-1);
    cout << a <<" ";
    return 0 ;
}

int main (void)
{
    int i ;

    cout << "Enter the last term to print n natural number"<<endl;
    cin >> i;

    num(i);

    return 0 ;
}