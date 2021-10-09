#include <iostream>
#define N 10
using namespace std;

class sample{
	static int a ;
	
	public:
		static void count ()
		{
			a++;
		}
		void write ()
		{
			cout << "The count of obj of the class sample is " << a << endl ;
		}
};

int sample::a;

int main (void)
{
	sample a[N] ;
	int i ;

	for ( i = 0 ; i < N ; i++ )
		a[i].count();

	a[0].write();

	return 0 ;
}
