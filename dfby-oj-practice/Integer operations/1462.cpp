#include <iostream>
using namespace std;
int main ()
{
    int a=0,b=0,c=0,d=0,e=0,f=0;
    cin>>a>>b>>c>>d;
    if (d<b)
    {
        d=d+60;
        c=c-1;
    }
    else
    {
        d=d;
        c=c;
    }
    f=d-b;
    e=c-a;
    cout<<e<<" "<<f<<endl;
    return 0;
}