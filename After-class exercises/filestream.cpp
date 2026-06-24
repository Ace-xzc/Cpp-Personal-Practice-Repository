#include <fstream>
#include <iostream>
using namespace std;
int main ()
{
    fstream xzc("stu.txt",ios::out);
    xzc<<"姓名：小明"<<"\n"<<"班级：一班。"<<endl;
    xzc.close();
    return 0;
}