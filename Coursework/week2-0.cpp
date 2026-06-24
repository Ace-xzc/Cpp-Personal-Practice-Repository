#include <iostream>
using namespace std;
int main ()
{ 
    float chinese, math ,english;

    cout << "请输入您的语文成绩"<< endl;

    cin >> chinese;

    cout << "请输入您的英语成绩"<< endl;

    cin >> english;

    cout << "请输入您的数学成绩"<< endl;

    cin  >> math;

    cout << "您的总分是：" << chinese + english + math <<endl;
    cout << "你的平均分是："<< (chinese + english + math )/ 3 << endl;

    


    return 0;
}