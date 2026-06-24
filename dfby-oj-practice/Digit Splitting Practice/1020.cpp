#include <iostream>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int unit = (n%100)%10;
    int ten = (n%100)/10;
    int hun = (n/100);
    int New = (unit*100)+(ten*10)+hun;
    cout<<n+New<<endl;
    return 0;
}