#include <fstream>
#include <iostream>
#include <string>
using namespace std;
class Student
{
    public:
        char m_Name[64];
        int m_Score;
};
int main ()
{
    fstream xzc("stu1.txt",ios::out|ios::binary);
    Student Xzc= {"谢梓丞",100};
    xzc.write((const char*)&Xzc,sizeof(Xzc));
    xzc.close();
    return 0;
}