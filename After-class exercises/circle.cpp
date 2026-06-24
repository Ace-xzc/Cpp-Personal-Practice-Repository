#include <iostream>
#include <string>
using namespace std;
#define PI 3.14
class point
{
    private:
    int m_x=0,m_y=0;
    public:
    void setx(int x)
    {
        m_x=x;
    }
    void sety(int y)
    {
        m_y=y;
    }
    int getx()
    {
        return m_x;
    }
    int gety()
    {
        return m_y;
    }
};
class circle
{
    private:
    int m_r=0;
    point m_center;
    public:
    void setr(int r)
    {
        m_r=r;
    }
    void setcenter(point center)
    {
        m_center=center;
    }
    int getr()
    {
        return m_r;
    }
    point getcenter()
    {
        return m_center;
    }
    string isincircle (point &p)
    {
        int d_sq=(p.getx()*p.getx())+(p.gety()*p.gety());
        int r_sq=m_r*m_r;
        if (d_sq>r_sq)
        {
            return "点在圆外";
        }
        else if (d_sq==r_sq)
        {
            return "点在圆上";
        }
        else
            return "点在圆内";
    }
};
int main()
{
    //创建园
    circle c;
    point center;
    center.setx(0);
    center.sety(0);
    c.setr(5);
    c.setcenter(center);
    //创建点
    point p1,p2,p3;
    p1.setx(3);p1.sety(4);//距离平方为25
    p2.setx(1);p2.sety(1);//距离平方为2
    p3.setx(6);p3.sety(0);//距离平方为36
    //输出园与点的关系
    cout<<"p1:"<<c.isincircle(p1)<<"\n"<<"p2:"<<c.isincircle(p2)<<"\n"<<"p3:"<<c.isincircle(p3)<<endl;
    return 0;
}
