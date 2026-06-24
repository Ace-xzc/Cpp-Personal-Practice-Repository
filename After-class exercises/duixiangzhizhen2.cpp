/*••定义一个Student类，包含公有成员string name，以及3个构造函数：无参构造（打印“无参构造调用”）、
有参构造（参数为string n，给name赋值，打印“有参构造调用：XXX”）、析构函数（打印“析构调用：XXX”）。
•在main函数中，完成两个操作：
•1. 定义一个包含2个元素的对象数组arr1，不初始化，观察无参构造的调用情况。
•2. 定义一个包含3个元素的对象数组arr2，通过列表初始化，分别给3个对象赋值为“赵六”“孙七”“周八”，观察有参构造的调用情况。
•运行程序，观察构造函数和析构函数的调用顺序（思考：析构函数为什么是反向调用？）。
提示：
对象数组初始化格式：类名 数组名[长度] = {类名(参数1), 类名(参数2), ...}；对象数组会自动调用构造函数，销毁时自动调用析构函数。*/
#include <iostream>
#include <string>
using namespace std;
class student
{
    public:
    string name;
    student()
    {
        cout<<"无参构造调用"<<endl;
    }
    student(string n)
    {
        name=n;
        cout<<"有参构造调用:XXX"<<endl;
    }
    ~student()
    {
        cout<<"析构调用:XXX"<<endl;
    }
};
int main ()
{
    student arr1[2];
    student arr2[3]={student("赵六"),student("孙七"),student("周八")};
    return 0;
}