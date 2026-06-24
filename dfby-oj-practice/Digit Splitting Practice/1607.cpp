#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    double ten = n/10;
    double num = n%10;
    cout<<fixed<<setprecision(1)<<ten/num<<endl;
    return 0;
}