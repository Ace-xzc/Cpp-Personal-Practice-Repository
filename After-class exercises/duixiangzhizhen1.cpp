/*•定义一个Student类，包含公有成员：string name（姓名）、int score（成绩），以及公有成员函数show()，功能是打印姓名和成绩。
•在main函数中，创建一个Student对象，给name赋值为“李四”，score赋值为90。
•定义对象指针，指向该对象，通过指针调用show()函数，再通过指针将score修改为95。
•再次通过指针调用show()函数，查看修改后的结果。*/
#include <iostream>
#include <string>
using namespace std;
/*•沿用实践题1的Student类（包含name、score、show()），新增公有成员函数setScore(int s)，功能是修改score的值。
•定义一个全局函数updateScore(Student &s, int newScore)，通过对象引用修改学生的成绩为newScore。
•在main函数中，创建Student对象stu，name赋值为“王五”，score赋值为85。
•定义对象引用refStu，关联stu，通过引用调用setScore()，将成绩改为88，打印结果。
•调用updateScore()函数，通过引用将成绩改为92，再次打印结果。
提示：
对象引用定义格式：类名 &引用名 = 对象；引用作为函数参数，直接修改原对象，无需解引用。*/
class student
{
    public:
    string name;int score;
    void setScore(int s)
    {
        score=s;
    }
    student()
    {
        name="moren";
        score=0;
    }
    void show()
    {
        cout<<"学生的姓名是："<<name<<"\n"<<"学生的成绩是："<<score<<endl;
    }
};

void updateScore(student &s, int newscore) 
{
    s.score = newscore;
}
int main ()
{
    student stu1,stu2,stu3;
    stu1.name="李四";
    stu1.score=90;
    student *p=&stu1;
    p->show();
    p->score=95;
    p->show();
    student *pp=&stu2;
    pp->show();
    stu3.name="王五";
    stu3.score=85;
    student &refStu =stu3;
    refStu.setScore(88);
    refStu.show();
    updateScore(stu3, 92);
    stu3.show();
    return 0;
}