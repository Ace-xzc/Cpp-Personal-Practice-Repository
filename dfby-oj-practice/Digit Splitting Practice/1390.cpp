#include <iostream>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int num = ((n%1000)%100)%10;
    int ten = (((n%1000)%100)/10);
    int hun = ((n%1000)/100);
    int tho = n/1000;
    cout<<num+ten+hun+tho<<endl;
    return 0;
}