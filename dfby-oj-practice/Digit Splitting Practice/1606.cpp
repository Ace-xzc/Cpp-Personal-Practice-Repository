#include <iostream>
#include <string>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int unit=n%10;
    int ten=n/10;
    int reversed=unit*10+ten;
    cout<<reversed<<endl;
    return 0;
}