#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    double x=0.0,y=0.0,z=0.0,avr=0.0;
    cin>>x>>y>>z;
    avr=(x+y+z)/3;
    cout<<fixed<<setprecision(3)<<avr<<endl;
    return 0;
}