#include <iostream>
#include <vector>
using namespace std;

int main (void)
{
    int i ;
    vector <int> v ;
    int n = 3 ;

    for ( i = 10 ; n ; i += 5, n-- )
        v.push_back(i);

    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    cout << v.max_size() << endl;

    for ( auto i = v.begin() ; i < v.end() ; i++ )
        cout << *i << " ";

    return 0 ;
}