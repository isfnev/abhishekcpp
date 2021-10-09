#include<iostream>
using namespace std;

int main()
{
    int total,total1,total2,gtotal;
    string name;
    
    int u;
    cout<<"ENTER YOUR NAME:"<<endl;
    cin>> name;

    cout<<"ENTER THE UNIT:"<<endl;
    cin>> u;

    if (u<=100)
        {
                cout<< name<< "THE TOTAL AMOUNT FOR YOUR ENERGY CONSUMPTION IS:\n"<< endl;
                cout<< (0.6*u) +50;
        }


    if (100<u<=300)
        {
                cout<< name <<":"<< "THE TOTAL AMOUNT FOR YOUR ENERGY CONSUMPTION IS:\n"<< endl;
                total= 0.6*100;
                u= u-100;
                total1= total + (0.8*u) + 50;
                cout<< total1<<endl;
        }

    else
        {
              cout<< name<<":"<< "THE TOTAL AMOUNT FOR YOUR ENERGY CONSUMPTION IS:\n"<< endl;
                total= 0.6*100;
                u= u-100;
                total1= total + (0.8*u);
                u=u-200;
                total2= u*0.9;
                gtotal=total1+total2+50;
                cout<< gtotal;
        }
}