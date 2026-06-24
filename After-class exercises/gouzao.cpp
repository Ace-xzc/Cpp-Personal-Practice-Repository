/*定义 Person 类，私有成员：姓名、年龄。
1.手写无参构造，初始化：姓名 = 未知，年龄 = 0；
2.手写析构函数，打印对象销毁提示；
3.编写成员函数打印信息；
4.主函数创建对象，观察构造、析构执行。*/
#include <iostream>
#include <string>
using namespace std;
/*在练习 1 基础上改造：
1.增加有参构造，用于给姓名、年龄赋值；
2.保留无参构造，形成构造重载； 
3.分别用无参、有参方式创建对象。*/
class person
{
    private:
    string name="moren";
    int age=0;
    public:
    int getage()
    {
        return age;
    }
    string getname()
    {
        return name;
    } 
    person()
    {
        name="weizhi";
        age=0;
        cout<<"我被无参构造了"<<endl;
    }
    person (string m_name,int m_age)
    {
        name=m_name;
        age=m_age;
        cout<<"我被有参构造了"<<endl;
    }
    ~person()
    {
        cout<<"对象销毁"<<endl;
    }
    void show()
    {
        cout<<"年龄:"<<getage()<<endl;
        cout<<"姓名:"<<getname()<<endl;
    }

};
int main()
{
    person xzc;
    person zc("Chengge",18);
    xzc.show();
    zc.show();
    return 0;
}