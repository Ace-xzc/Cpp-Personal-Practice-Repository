#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    double c=0.0,f=0.0;
    cin>>c;
    f=9.0/5.0*c+32;
    cout<<fixed<<setprecision(2)<<f<<endl;
    return 0;
}