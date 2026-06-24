#include <iostream>
using namespace std;
int main ()
{
    for (int i = 1; i < 10 ; i++)//外循环，i是第一个乘数
    {
       for (int j = 1; j <= i; j++)//内循环，j是第二个乘数，当第二个数大于第一个数时停止。
       {
        cout<<i<<"*"<<j<<"="<<i*j<<"\t";
       }
       cout<<endl;//换行循环
    }
    
    return 0;
}