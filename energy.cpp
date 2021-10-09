#include <iostream>
using namespace std;

int main (void)
{
    int i ;
    string name;

    cout<<"Enter the user's name"<<endl;
    cin>>name;

    cout<<"Enter the unit"<<endl;
    cin>>i;

    if ( i < 50 )
        i = 3000;
    if( i < 101 )
        i *= 60 ;
    if ( i < 301 )
        i = 6000 + ( i - 100 )*80 ;
    else
        i = 22000 + ( i - 300 )*90 ;

    cout<<"Name : "<<name<<endl<<"The energy consumption is "<<i<<endl;

    return 0 ;
}