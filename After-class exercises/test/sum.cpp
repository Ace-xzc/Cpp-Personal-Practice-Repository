#include <iostream>
using namespace std;
extern int n;
extern double grade [100];
void sum()
{
    double total=0;
    for (int i = 0; i < n; i++)
    {
        total=total+grade[i];
    }
    cout<<"总分为："<<total<<endl;    

}
