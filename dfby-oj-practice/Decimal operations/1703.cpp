#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    double price=0.0;
    int num=0;
    int sum=0;
    cin>>price>>num;
    sum=num*price;
    cout<<fixed<<setprecision(2)<<price<<" "<<num<<" "<<sum<<endl;
    return 0;
}