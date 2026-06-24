#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    double x=0.0,y=0.0,z=0.0,avr=0.0,sum=0.0;
    cin>>x>>y>>z;
    avr=(x+y+z)/3;
    sum=x+y+z;
    cout<<sum<<endl;
    cout<<fixed<<setprecision(1)<<avr<<endl;
    return 0;
}