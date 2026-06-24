#include <iostream>
using namespace std;
int main ()
{
    int n=0,sum=0;
    cin>>n;
    for (int i = 1; i <= n; i=i+2)
    {
        sum=sum+i;
    }
    cout<<sum<<endl;
    return 0;
}