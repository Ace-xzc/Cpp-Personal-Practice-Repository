/*定义 Student 类：
1.私有成员：学号 id、分数 score；
2.无参构造：学号 0、分数 0；
3.有参构造：初始化学号和分数；
4.析构函数：打印「学生对象销毁」；
5.成员函数输出学生信息；
6.主函数创建两个对象，测试运行。*/
#include <iostream>
using namespace std;
class student
{
    private:
    long long id;
    int score;
    public:
    student()
    {
        id=0;
        score=0;
    }
    student(long long m_id,int m_score)
    {
        id=m_id;
        score=m_score;
    }
    ~student()
    {
        cout<<"学生对象销毁"<<endl;
    }
    void show()
    {
        cout<<"学生的学号是："<<id<<"\n"<<"学生的成绩是："<<score<<endl;
    }
};
int main ()
{
    student stu1;
    student stu2(20255080901103,100);
    stu1.show();
    stu2.show();
    return 0;
}