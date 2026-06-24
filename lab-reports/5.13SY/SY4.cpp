/*（1）设计一个CPU类，包含：
公有成员：主频（float freq）、核心数（int cores）。
构造函数（初始化参数并输出“CPU已创建”）
析构函数（输出“CPU已销毁”）
（2）设计一个Computer类，包含：
私有成员：品牌（string brand）、CPU cpu（对象成员）。
构造函数（初始化品牌和CPU参数，按初始化列表方式）
析构函数（输出“电脑已销毁”）
显示配置函数
（3）在 main() 中创建 Computer 对象，运行代码通过终端输出内容观察构造和析构顺序。*/
#include <iostream>
#include <string>
using namespace std;
class CPU
{
    public:
    float freq;
    int cores;
    CPU(float f,int c):freq(f),cores(c){cout<<"CPU已创建"<<endl;}
    ~CPU(){cout<<"CPU已销毁"<<endl;}
};
class computer
{
    string brand;
    CPU cpu;
    public:
    computer(string b,float f,int c):brand(b),cpu(f,c){}
    ~computer(){cout<<"电脑已销毁"<<endl;}
    void show()
    {
        cout<<brand<<endl;
        cout<<cpu.freq<<endl;
        cout<<cpu.freq<<endl;
    }
};
int main()
{
    computer xzc("联想",100,80);
    xzc.show();
    return 0;
}