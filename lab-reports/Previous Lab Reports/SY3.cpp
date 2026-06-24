#include <iostream>
using namespace std;
int main ()
{
    int x,y;
    char n;//n为运算符号
    cout<<"请输入2个数字和一个运算符号,格式：数字，符号，数字"<<endl;
    cin>>x>>n>>y;
    switch (n)
    {
    case '+':
        cout<<x<<n<<y<<"="<<x+y<<endl;
        break;
    case '-':
        cout<<x<<n<<y<<"="<<x-y<<endl;
        break;
    case '*':
        cout<<x<<n<<y<<"="<<x*y<<endl;
        break;
    case '/':
        cout<<x<<n<<y<<"="<<x/y<<endl;
        break;
    default:
        cout<<"请按格式输入"<<endl;
        break;
    }
    return 0;
}