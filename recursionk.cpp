#include <iostream>
using namespace std;

int step(int a, int b, int c)
{
    if ( (a + c) > b )
        return 0 ;

    cout << a << " " ;

    return step(a + c, b, c);
}

int main (void)
{
    int x ;
    int y ;
    int k ;

    cout << "Enter the limits and the step" << endl;
    cin >> x >> y >> k ;

    step( x, y, k);

    return 0 ;
}