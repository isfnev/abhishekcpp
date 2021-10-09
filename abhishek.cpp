#include <iostream>
using namespace std;

class base {
	public:
		int x ;
		static int y ;

		static void printx()
		{
			cout << "The value of y is " << y << endl ;
		}
		void printy();
};

void base::printy()
{
	cout << "The value of x, y is " << x <<" "<< y << endl ;
}

int base::y;

int main (void)
{
	base a, b ;

	cout << "Enter the value of x and y in object a" << endl ;
	cin >> a.x >> base::y;

	cout << "Enter the value of x and y in object " << endl ;
	cin >> b.x >> b.y;

	cout <<"The value of a.x, a.y, b.x and b.y are " << a.x<<" "<<a.y<<" "<<b.x<<" "<<b.y<<" "<<endl;

	cout << "The value of y in obj a ";
	a.printx();

	cout << "The value of y in obj b ";
	b.printx();

	cout << "The value of x, y in obj a ";
	a.printy();

	cout << "The value of x, y in obj b ";
	b.printy();

	return 0 ;
}
