#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    int n=0;
    double angle=0.0;
    cin>>n;
    angle=(n-2.0)*180.0/n;
    cout<<fixed<<setprecision(1)<<angle<<endl;
    return 0;
}