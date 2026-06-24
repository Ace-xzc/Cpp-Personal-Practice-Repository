#include <iostream>
using namespace std;
extern int n;
extern double grade [100];
void average()
{
    double total=0;
    for (int i = 0; i < n; i++)
    {
        total=total+grade[i];
    }
    double ave=total/n;
    cout<<"平均分为："<<ave<<endl;

}
