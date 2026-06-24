#include <iostream>
using namespace std;
int main ()
{
    int n=0;
    cin>>n;
    int unit=n%10;
    int ten=n/10;
    cout<<unit+ten<<endl;
    return 0;
}