#include <iostream>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int unit,ten,hundred;
    unit=(n%100)%10;
    ten=(n/10)%10;
    hundred=n/100;
    cout<<unit+ten+hundred<<endl;
    return 0;
}