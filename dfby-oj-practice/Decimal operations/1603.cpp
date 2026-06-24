#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    int x=0,y=0;
    double pay=0.0;
    cin>>x>>y;
    pay=x*2.5+y*1.5-2.5;
    cout<<fixed<<setprecision(1)<<pay<<endl;
    return 0;
}