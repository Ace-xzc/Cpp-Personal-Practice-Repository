#include <iostream>
#include <ctime>//提供时间函数用来生成随机数的随机种子。
#include <cstdlib>//提供随机数生成函数rand（）和srand（）。
using namespace std;
int main ()
{
    int a,g,c;//a代表随机生成的那一个数，g用来储存用户猜测的数，c记录有5次机会。
    cout<<"猜数字游戏开始!1~100之间的整数,你有5次机会。"<<endl;
    srand(time(0));//按时间生成随机种子
    a=rand()%100+1;//rand()%100生成范围为：0~99，加1变成：1~100.整个向右移动一位。
    for ( c = 1; c <= 5; c++)
    {
        cout<<"第"<<c<<"次猜测：";
        cin>>g;
        if (g==a)
        {
            cout<<"恭喜你猜中了"<<endl;
            return 0;
        }
        else if (g>a)
        {
            cout<<"恭喜你猜大了"<<endl;
        }
        else if (g<a)
        {
            cout<<"恭喜你猜小了"<<endl;
        }
    }
    cout<<"您的机会用尽,正确答案是："<<a<<endl;
    return 0;
}