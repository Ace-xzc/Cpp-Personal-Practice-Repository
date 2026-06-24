#include <iostream>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int mil=n/10000;
    int tho=(n%10000)/1000;
    int hun=(((n%10000)%1000)/100);
    int ten=(((n%10000)%1000)%100)/10;
    int uni=(((n%10000)%1000)%100)%10;
    cout<<mil+tho+hun+ten+uni<<endl;
    return 0;
}