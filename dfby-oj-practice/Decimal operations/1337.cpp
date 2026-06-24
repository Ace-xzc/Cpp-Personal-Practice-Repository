#include <iostream>
#include <iomanip>
#define PI 3.14
using namespace std;
int main ()
{
    double x=0.0,s=0.0,r=0.0;
    cin>>x;
    r=x/(2.0*PI);
    s=PI*r*r;
    cout<<fixed<<setprecision(2)<<s<<endl;
    return 0;
}