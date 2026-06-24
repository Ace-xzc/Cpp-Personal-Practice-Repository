#include <iostream>
using namespace std;
/*定义一个 Car 汽车类
1.私有成员：
•int id  车辆编号
•静态成员变量 static int totalCar ：统计一共创建多少辆汽车
2.公有成员：
•构造函数：给 id 赋值，每创建 1 个汽车对象，总数 + 1
•析构函数：每销毁 1 个汽车对象，总数 - 1
•静态成员函数 static int getTotal() ：返回当前汽车总数
3.要求：
•静态变量类外初始化
•主函数测试：
a.输出初始车辆总数
b.创建 2 个汽车对象
c.再次输出总数
d.销毁一个对象，再次输出总数*/
class cat
{
    private:
    int id;
    static int totalcar;
    public:
    cat (int m_id):id(m_id)
    {
        totalcar++;
        cout<<"车辆id:"<<id<<endl;
    }
    ~cat()
    {
        totalcar--;
        cout<<"车辆销毁的id为:"<<id<<endl;
    }
    static int getTotal();
};
int cat:: totalcar=0;
int cat:: getTotal()
{
    return totalcar;
}
int main ()
{
    cout<<"初始车辆总数:"<<cat :: getTotal()<<endl;
    cat c1(1001),c2(1002);
    cout<<"目前车辆总数:"<<cat :: getTotal()<<endl;
    c1.~cat();
    cout<<"最后车辆总数:"<<cat :: getTotal()<<endl;
    return 0;
}
