#include <iostream>
using namespace std;
float MAX(float x,float y,float z)
{
    float t;
    t=x>y ?x:y;

return (t>z ?t:z);
}
int MAX(int x,int y,int z)
{
    int t;
    t=x>y ?x:y;

return (t>z ?t:z);
}
int main ()
{
    int a,b,c;
    float x,y,z;
    cout<<"请输入3个整数:";
    cin>>a>>b>>c;
    cout<<"其中最大值为："<<MAX(a,b,c)<<endl;
    cout<<"请输入3个浮点数:";
    cin>>x>>y>>z;
    cout<<"其中最大值为："<<MAX(x,y,z)<<endl;
    return 0;
}