#include <iostream>
using namespace std;
class Point
{
    friend Point operator+(Point p1,double p2);
    private:
        double x,y;
    public:
        Point(double d_x,double d_y):x(d_x),y(d_y){}
        void show(){cout<<"点的坐标相加为:"<<x<<","<<y<<endl;}
};
        Point operator+(Point p1,double p2){return Point(p1.x+p2,p1.y+p2);}
int main ()
{
    Point P1(1,1);
    double P2=1.0;
    Point P3=P1+P2;
    P3.show();
    return 0;
}