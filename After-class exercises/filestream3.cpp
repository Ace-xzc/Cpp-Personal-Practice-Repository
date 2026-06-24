#include <fstream>
#include <iostream>
using namespace std;
class Student
{
    public:
        char m_Name[64];
        int m_Score;
};
int main ()
{
    fstream xzc("stu1.txt",ios::in|ios::binary);
    if (!xzc.is_open())
    {
        cout<<"文件打开失败"<<endl;
    }
    Student X;
    xzc.read((char*)&X,sizeof(X));
    cout<<X.m_Name<<"\t"<<X.m_Score<<endl;
    xzc.close();
    return 0;
}