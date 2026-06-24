#include <iostream>
using namespace std;
int main ()
{
    int i=1,sum=0;
    while (i<=100)
    {
        sum=sum+i;
        i++;
    }
    cout<<"1+2+...+100的和为:"<<sum<<endl;
    return 0;
}