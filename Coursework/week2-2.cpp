#include <iostream>
using namespace std;
int main ()
{
    int num;
    cout<<"请输入一个数字"<<endl;
    cin>>num;
    if (num%2==0)
    {
        cout<<"这个数字"<<num<<"是偶数。"<<endl;
    }
    else
        cout<<"这个数字"<<num<<"是奇数"<<endl;
    
    return 0;
}