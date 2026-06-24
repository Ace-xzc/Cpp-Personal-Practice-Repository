#include <iostream>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int ten =(n/10)%10;
    int unit =(n%100)%10;
    int hun =n/100;
    int susption=unit*100+ten*10+hun;
    cout<<susption<<endl;
    return 0;
}