#include <iostream>
using namespace std;
int main ()
{
    int grade;
    cout << "请输入您的成绩";
    cin >> grade;
    if (grade>100)
    {
        cout<<"请输入小于等于100的分数"<<endl;
    }
    else if (grade>=90)
    {
        cout<<"您的成绩等级是A"<<endl;        
    }
    else if (grade>=80)
    {
        cout<<"您的成绩等级是B"<<endl;        
    }
    else if (grade>=70)
    {
        cout<<"您的成绩等级是C"<<endl;        
    }
    else if (grade>=60)
    {
        cout<<"您的成绩等级是D"<<endl;        
    }
    else 
    {
        cout<<"您的成绩等级是E"<<endl;        
    }
    return 0;
}