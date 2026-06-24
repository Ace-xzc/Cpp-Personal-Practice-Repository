#include <iostream>
#include <string>
using namespace std;
class Room;
class Friend
{
    public:
            void visit(Room& r);
};
class Room
{
    friend void Friend::visit(Room& r);
    private:
        string bed;
    public:
        string living;
        Room()
        {
            bed="卧室";
            living="客厅";
        }

};
void Friend::visit(Room& r)
{
    cout<<"您的朋友正在访问："<<r.living<<endl;
    cout<<"您的朋友正在访问："<<r.bed<<endl;
}
int main ()
{
    Room room;
    Friend f;
    f.visit(room); 
    return 0;
}
