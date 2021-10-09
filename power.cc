#incldue <iostream>
using namespace std;

void power(int m , int n)
{
    int i ;

    for ( i = 1 ; i < n ; i++ )
        m *= m ;
}

int main (void)
{
    int m ;
    int n ;

    cout << "Enter the value of m and n" << endl;
    cin >> m >> n;

    power(m,n);

    return 0 ;
}