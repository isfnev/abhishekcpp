#include <iostream>
using namespace std;

class c{
    int y ;
    public:
        int x ;
        void display(int a)
        {
            y = a*a;
            cout<<"value of y = "<<y<<endl;
        };
    protected :
        int z ;
};

class d : c{
    public:
        void see()
        {
            cout << "Enter the value of z"<<endl;
            cin >> z ;

           cout << "The value of z is "<< z << endl;
        };
};

int main (void)
{
    c a;
    d b;

    cout<<"Enter the value of x"<<endl;
    cin>>a.x;

    cout<<"The value of x is "<<a.x<<endl;

    a.display(3);
    b.see();

    return 0 ;
}