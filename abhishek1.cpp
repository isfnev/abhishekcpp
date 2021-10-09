#include <iostream>
using namespace std;

class sample{
	int m;
	void read();

	public:
		void update();
};

void sample::update ()
{
	cout << "Enter the value of m "<<endl;
	cin >> m ;
	read();
}

void sample::read()
{
	cout << "The value of m = " << m << endl ;
}

int main (void)
{
	sample s;
	
	s.update();

	return 0 ;
}
