#include <iostream>
using namespace std;
extern int n;
extern double grade [100];
void findmax()
{
    double max=grade[0];
    for (int i = 0; i < n; i++)
    {
    if (grade[i]>=max)
    {
        max=grade[i];
    }
    }
    
    
    
    cout<<"最高总分为："<<max<<endl;    

}
