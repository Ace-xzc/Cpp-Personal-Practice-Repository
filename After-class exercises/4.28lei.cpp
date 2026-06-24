#include <iostream>
using namespace std;
class student
{   
    public:
    long long core;
    string name;

    void show()
    {
       cout<<"学生的学号："<<core<<endl;
       cout<<"学生的姓名："<<name<<endl;
    }
};
int main ()
{
    student Xzc;
    Xzc.core=20255080901103;
    Xzc.name="Xiezicheng";
    Xzc.show();
    return 0;
}