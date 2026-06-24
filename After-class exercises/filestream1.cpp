#include <fstream>
#include <iostream>
using namespace std;
int main ()
{
    fstream xzc("stu.txt",ios::in);
    if (!xzc.is_open())
    {
        cout<<"文件打开失败"<<endl;
    }
    string buf;
    while(getline(xzc,buf))
    {
        cout<<buf<<endl;
    }
    return 0;
}