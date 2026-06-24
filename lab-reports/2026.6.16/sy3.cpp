#include <iostream>
#include <string>
using namespace std;
/*3、定义两个string对象s1="abc"，s2="def"。要求：
（1）使用+和append两种方式将s2连接到s1后面，输出结果；
（2）比较s1和"abcdef"是否相等；
（3）使用下标方式将s1的第一个字符改成'x'，输出；
（4）使用for循环依次输出s1中每个字符。*/
int main ()
{
 string s1="abc",s2="def";
 cout<<s1+s2<<endl;
 cout<<s1.append(s2)<<endl;
 if (s1=="abcdef")
 {
 cout<<"相等"<<endl;
 }
 else
 {
 cout<<"不相等"<<endl;
 }
 //***这个是拓展内容***
 int pos=s1.find('a');
 cout<<s1.replace(pos,1,"x")<<endl;
 //******结束******
 //下标法
  s1[0]='x';
 cout<<s1<<endl;
 for (int i = 0; i < s1.length(); i++)
 {
    cout<<s1[i]<<" ";
 }
 return 0;
}
