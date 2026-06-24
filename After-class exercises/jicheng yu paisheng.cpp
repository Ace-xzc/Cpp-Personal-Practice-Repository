#include <iostream>
using namespace std;
class Base
{
    public:
    void Fun1()
    {
        cout<<"我是Fun1函数"<<endl;
    }
    protected:
    void Fun2()
    {
        cout<<"我是Fun2函数"<<endl;
    }
    private:
    void Fun3()
    {
        cout<<"我是Fun3函数"<<endl;
    }
};
class Derive1:public Base
{/*
    public:
    void Fun1()
    {
        cout<<"我是Fun1函数"<<endl;
    }
    protected:
    void Fun2()
    {
        cout<<"我是Fun2函数"<<endl;
    }
    private:
    void Fun3()
    {
        cout<<"我是Fun3函数"<<endl;
    }*/
    public:
    void Fun1()
    {
        cout<<"我是派生类中的fun1函数"<<endl;
    }
};
class Derive3:protected Base
{
    /*
    protected:
    void Fun1()
    {
        cout<<"我是Fun1函数"<<endl;
    }
    protected:
    void Fun2()
    {
        cout<<"我是Fun2函数"<<endl;
    }
    protected:
    void Fun3()
    {
        cout<<"我是Fun3函数"<<endl;
    }
    */
};
class Derive2:private Base
{
    /*
    private:
    void Fun1()
    {
        cout<<"我是Fun1函数"<<endl;
    }
    private:
    void Fun2()
    {
        cout<<"我是Fun2函数"<<endl;
    }
    private:
    void Fun3()
    {
        cout<<"我是Fun3函数"<<endl;
    }
    */
};
int main ()
{
    Base b1;
    b1.Fun1();
    //b1.Fun2();类外无法访问保护权限
    //b1.Fun3();类外无法访问私有权限
    Derive1 d1;
    d1.Fun1();
    //d1.Fun2();类外无法访问保护权限
    //d1.Fun3();类外无法访问私有权限
    Derive2 d2;
    //d2.Fun1();私有权限无法访问，派生类外部无法访问基类成员
    //d2.Fun2();类外无法访问私有权限，派生类外部无法访问基类成员
    //d2.Fun3();类外无法访问私有权限，派生类外部无法访问基类成员
    Derive3 d3;
    //d3.Fun1();保护权限无法访问
    //d3.Fun2();类外无法访问保护权限
    //d3.Fun3();类外无法访问保护权限
    return 0;
}