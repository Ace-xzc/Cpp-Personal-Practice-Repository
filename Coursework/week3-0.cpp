#include <iostream>
#include <string>
using namespace std;
int main ()
{
    int i=0;
    int x=0;//设置行数
    while (i<100)
    {
        i++;//先用再加，++i；先加后用
        if (i%7==0||i%10==7||i/10==7)
        {
            cout<<"敲桌子\t";
        }
        else
        {
            cout<<i<<"\t";
        }
        x++;
        if (x%10==0)
        {
            cout<<endl;
        }
    }
    return 0;
}