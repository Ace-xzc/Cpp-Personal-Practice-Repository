#include <iostream>
using namespace std;
int main ()
{
    int  pig_A , pig_B , pig_C ;
    cout << "请输入三只小猪的重量:" << endl;
    cout << "请输入小猪A的体重:" << endl;
    cin >> pig_A ;
    cout << "请输入小猪B的体重: "<< endl;
    cin >> pig_B ;
    cout << "请输入小猪C的体重:" << endl;
    cin >> pig_C ;
if (pig_A == pig_B && pig_B == pig_C)
    {
    cout << "三只小猪一样最重"<<endl;
    }
    else if (pig_A >= pig_B && pig_A >= pig_C)
    {
        cout << "小猪A最重"<<endl;
    }
    else if (pig_B >= pig_A && pig_B >= pig_C)
    {
        cout << "小猪B最重"<<endl;
    }
    else
        cout << "小猪C最重"<<endl;
return 0;
}
