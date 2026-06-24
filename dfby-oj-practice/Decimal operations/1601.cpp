#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    int x=0,fox=0,sheep=0;
    double avr=0.0;
    cin>>x;
    fox=3*x;
    sheep=fox-8;
    avr=(x+fox+sheep)/3.0;
    cout<<fox<<"\n"<<sheep<<"\n"<<fixed<<setprecision(1)<<avr<<endl;
    return 0;
}