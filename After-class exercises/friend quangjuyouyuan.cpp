#include <iostream>
#include <cmath>
using namespace std;
/*友元函数计算距离
（1）定义一个 Point 类，包含私有数据成员 x 和 y（double类型）。
（2）公有权限：定义构造函数用来初始化坐标
（3）声明友元函数 double distance(const Point& p1, const Point& p2)，用于计算两点间的距离。
（4）在main() 中创建两个点对象，调用友元函数输出距离。
#include<cmath> sqrt()函数用了计算平方根*/
class point
{
    friend double distance(const point& p1, const point& p2);//对象引用:相当于起别名，共用同一块地址。
    private:
    double x,y;
    public:
    point (double x,double y)
    {
        this->x=x;
        this->y=y;
    }
};
double distance(const point& p1, const point& p2)
    {
        double dx=0,dy=0;
        dx=p2.x-p1.x;
        dy=p2.y-p1.y;
        return sqrt(dx*dx+dy*dy);
    }
int main ()
{
    point p1(3,4),p2(0,0);
    cout<<"两点间距离为:"<<distance(p1,p2)<<endl;
    return 0;
}
