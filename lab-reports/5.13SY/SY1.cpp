/*模拟银行账户类 Account
（1）该类包含私有数据成员：账号（string  accNo）、余额（double balance）。
（2）包含公有成员函数：构造函数（初始化账户号和余额）
析构函数（输出“账户注销”）存款函数 deposit(double amount)取款函数 withdraw(double amount)（余额不足时提示并拒绝）显示余额函数 showBalance()*/
#include <iostream>
#include <string>
using namespace std;
class account
{
string accNo;
double balance;
public:
account(string d_accNo="",double d_balance=0.0):accNo(d_accNo),balance(d_balance){}
~account(){cout<<"账号注销"<<endl;}
int deposit(double amount)
{
    balance=amount+balance;
    return amount;
}
int withdraw(double amount)
{
    if (amount>balance)
    {
        cout<<"余额不足"<<endl;
        return 0;
    }
    else
    {
        balance=balance-amount;
    }
}
void showBalance()
{
    cout<<"账号："<<accNo<<endl;
    cout<<"余额："<<balance<<endl;
}
};
int main ()
{
    account xzc("xzc",100);
    xzc.deposit(100);
    xzc.withdraw(50);
    xzc.showBalance();
    return 0;
}