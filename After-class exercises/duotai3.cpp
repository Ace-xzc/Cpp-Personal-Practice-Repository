#include <iostream>
using namespace std;
class Point
{
    friend Point operator+(double p1,Point p2);
    private:
        double x,y;
    public:
        Point(double d_x,double d_y):x(d_x),y(d_y){}
        void show(){cout<<"点的坐标相加为:"<<x<<","<<y<<endl;}
};
        Point operator+(double p1,Point p2){return Point(p1+p2.x,p1+p2.y);}
int main ()
{
    Point P2(1,1);double P1=1;
    Point P3=P1+P2;
    P3.show();
    return 0;
}