#include <iostream>
using namespace std;

int num(int a)
{
    if ( a == 1 )
        return;

    return num(a-1);
    cout << a << " ";
}

int main (void)
{
    int i ;

    cout << "Enter the last term to print n natural number"<<endl;
    cin >> i;

    num(i);

    return 0 ;
}