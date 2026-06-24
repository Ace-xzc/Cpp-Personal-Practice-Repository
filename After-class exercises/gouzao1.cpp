/*定义 Clock 时钟类，私有成员：时、分、秒。
1.编写一个构造函数，三个参数全部带默认值 0；
2.手写析构打印提示；
3.分别使用：无参、部分参数、全参数 创建对象。*/
#include <iostream>
using namespace std;
class clock
{
    private:
    int h,m,s;
    public:
    int geth()
    {
        return h;
    }
    int getm()
    {
        return m;
    }
    int gets()
    {
        return s;
    }
    clock(int hh=0,int mm=0,int ss=0)
    {
        h=hh;
        m=mm;
        s=ss;
        cout<<"我是构造函数"<<endl;
    }
    ~clock()
    {
        cout<<"我是析构提示"<<endl;
    }
};
int main ()
{
    clock c1;
    clock c2(11,40);
    clock c3(24,45,60);
    cout<<c2.geth()<<","<<c2.getm()<<","<<c2.gets()<<endl;
    cout<<c1.geth()<<","<<c1.getm()<<","<<c1.gets()<<endl;
    cout<<c3.geth()<<","<<c3.getm()<<","<<c3.gets()<<endl;
    return 0;
}