#include <iostream>
using namespace std;
int main ()
{
    const double PI =3.14159;

    const int MAX_AGE = 100;

    #define CLASS_NAME  "C++入门班"

    #define STU_COUNT   45

    cout <<"常量展示"<<endl;

    cout <<"const定义的圆周率:"<<PI<<"          最大年龄限制："<<MAX_AGE<<endl;
    
    cout <<"#define定义的班级名称:"<<CLASS_NAME<<"    班级人数"<<STU_COUNT;
    return 0;

}