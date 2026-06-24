#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    int x=0,y=0,n=0;
    double give=0;
    cin>>x>>y>>n;
    give=n-(x+y)*0.9;
    cout<<fixed<<setprecision(1)<<give<<endl;
    return 0;
}