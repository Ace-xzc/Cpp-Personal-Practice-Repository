#include <iostream>
#include <iomanip>
#define PI 3.14
using namespace std;
int main ()
{
    int r1=0,r2=0;
    double s1=0,s2=0;
    cin>>r1>>r2;
    s1=PI*r1*r1;
    s2=PI*r2*r2;
    cout<<fixed<<setprecision(2)<<(s1-s2)<<endl;
    return 0;
}