#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    double hun=n/100;
    double ten=(n%100)/10;
    double uni=(n%100)%10;
    cout<<fixed<<setprecision(2)<<(hun+ten)/(ten+uni)<<endl;
    return 0;
}