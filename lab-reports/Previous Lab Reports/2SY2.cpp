#include <iostream>
#include <iomanip>//这个是问豆包的，用于控制输出的小数位数
using namespace std;
/*2、歌手打分：在歌唱比赛中，共有10位评委进行打分，在计算歌手得分时，去掉一个最高分，去掉一个最低分，
然后剩余的8位评委的分数进行平均，就是该选手的最终得分。输入每个评委的评分，求某选手的得分（保留小数点后两位）。
实现思路：求出数组元素的最大值、最小值以及和，然后用和减去最大值和最小值，然后除以8获得得分。（注意数据类型的合理性）*/
int main()
{   
    int i;
    double s[10]={0};
    double max ,min,sum=0;
    cout<<"请评委输入10个分数"<<endl;
    for (i = 0; i < 10; i++)
    {
        cin>>s[i];
        sum=sum+s[i];
    }
    max=s[0] ,min=s[0];
    for ( i = 0; i < 10; i++)
    {
      
        if (s[i]>max)
        {
            max=s[i];
        }
        if (s[i]<min)
        {
            min=s[i];
        }
    }
    cout<<"最小的评分为"<<min<<endl;
    cout<<"最大的评分为"<<max<<endl;
    double sore = (sum - max -min)/8;
    cout<<"该选手的分数为"<<fixed<<setprecision(2)<<sore<<endl;//控制小数位数也是问豆包的
    return 0;
}