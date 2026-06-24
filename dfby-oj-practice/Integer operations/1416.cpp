#include <iostream>
using namespace std;
int main()
{
    int length=0,wide=0,C=0,S=0;
    cin>>length>>wide;
    C=(length+wide)*2;
    S=length*wide;
    cout<<C<<"\n"<<S;
    return 0;
}