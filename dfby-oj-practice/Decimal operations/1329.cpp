#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    int a=0,b=0,h=0;
    double s=0;
    cin>>a>>b>>h;
    s=(a+b)*h/2.0;
    cout<<fixed<<setprecision(1)<<s<<endl;
    return 0;

}