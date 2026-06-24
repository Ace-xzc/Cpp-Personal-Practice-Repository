/*已知字符串1为："fine!", 字符串2为："How are you?"，试将这两个字符串连接成一个字符串，
要求长的字符串放到前面。试编程输出连接后的字符串，再输出这三个字符串的长度值。*/
#include <iostream>
#include <cstring>//豆包检查后添加的
using namespace std;
int main()
{
    char s1[]="fine!",s2[]="How are you?",s3[100]={0};
    int long1,long2;
    long1=strlen(s1);
    long2=strlen(s2);
    if (long1>=long2)
    {
        strcat(s3,s1);
        strcat(s3,s2);
    }
    else
    {
        strcat(s3,s2);
        strcat(s3,s1);
    }
    cout<<"拼接后的字符串："<<s3<<endl;
    cout<<"字符串1的长度:"<<long1<<endl;
    cout<<"字符串2的长度:"<<long2<<endl;
    cout<<"拼接后字符串的长度:"<<strlen(s3)<<endl;
    return 0;
}