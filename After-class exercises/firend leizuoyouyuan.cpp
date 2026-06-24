#include <iostream>
#include <string>
using namespace std;
/*设计两个类：
1.Room 房间类
公共成员：客厅 living
私有成员：卧室 bed
2.Friend 朋友类
内部有 Room 指针，可以访问房间
3.把 Friend 类声明为 Room 的友元类
4.在 Friend 的 visit 函数中访问客厅和卧室
5.main 中测试*/
class room
{
    friend class Friend;
    private:
    string bed;
    public:
    string living;
    public:
    room():living("客厅"),bed("卧室")
    {}
};
class Friend
{
    public:
    room* r;
    Friend()
    {
        r=new room();
    }
    void visit()
    {
        cout<<"您的朋友正在访问："<<r->bed<<"\n"<<"您的朋友正在访问:"<<r->living<<endl;
    }
    ~Friend()
    {
        delete r;
    }
};
int main ()
{
    Friend F1;
    F1.visit();
    return 0;
}   