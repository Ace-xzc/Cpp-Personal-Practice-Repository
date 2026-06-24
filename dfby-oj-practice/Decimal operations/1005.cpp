#include <iostream>
#include <iomanip>
using namespace std;
#define PI 3.1415926
int main ()
{
    int r=0;
    double squat=0.00,c=0.00;
    cin>>r;
    squat=PI*r*r;
    c=2*PI*r;
    cout<<fixed<<setprecision(2)<<squat<<endl;
    cout<<fixed<<setprecision(2)<<c<<endl;
    return 0;
}