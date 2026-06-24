#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    int n=0;
    int total=0,pink=0;
    cin>>n;
    total=n*n;
    pink=4+(n*2-1);
    double percent=(double)pink/total*100;
    cout<<fixed<<setprecision(1)<<percent<<"%"<<endl;
    return 0;
}