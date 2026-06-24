#include <iostream>
#include <string>
using namespace std;
/*定义一个 Book 类，该类包含：
（1）私有数据成员：书名（string title）、价格（float price）。
静态数据成员：int total（记录创建的图书对象总数）。
（2）公有成员函数：
带参构造函数：初始化书名和价格，每创建一个图书对象，图书总数自增 1；析构函数：对象销毁时，图书总数减1；
静态成员函数 getTotalBooks() ：返回当前图书总数量
（3）在 main()中：动态创建大小为3的 Book 对象数组，使用列表初始化方式给每本书赋值；调用静态成员函数，输出当前一共创建的图书总数量。
释放动态空间，然后再次输出图书总数量观察前后区别。*/
class book
{
    string title;
    float price;
    static int total;
    public:
    book(string d_title="",float d_price=0.0):title(d_title),price(d_price){total++;}
    ~book(){total--;}
    static int getTotalBooks()
    {
        return total;
    }
};
int book :: total=0;
int main ()
{
    book*book1=new book[3]
    {book("a",10),book("b",20),book("c",30)};
    cout<<book1->getTotalBooks()<<endl;
    delete [] book1;
    cout<<book1->getTotalBooks()<<endl;
    return 0;
}