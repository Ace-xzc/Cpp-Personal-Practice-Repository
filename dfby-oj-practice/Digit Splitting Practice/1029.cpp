#include <iostream>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int unit =(((n%1000)%100)%10);
    int ten =(((n%1000)%100)/10);
    int hun =((n%1000)/100);
    int tho =(n/1000);
    cout<<(unit*1000)+(ten*100)+(hun*10)+tho<<endl;
    return 0;
}