#include <iostream>
using namespace std;
int n;
double grade[100];
extern void sum();
extern void average();
extern void findmax();
int main ()
{
    cout<<"请输入学生人数"<<endl;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
    cout<<"请输入"<<n<<"名学生的成绩";
    cin>>grade[i];
    }
    sum();
    average();
    findmax();

    return 0;
}