#include <iostream>
#include <string>
using namespace std;
/***函数声明***/
int countWords(const string& text);
/***主函数***/
int main ()
{
    string s1;
    s1="C++ programming is fun and powerful";
    cout<<countWords(s1)<<endl;
    return 0;
}
/***函数体***/
int countWords(const string& text)
{
    int count=0;
    bool word=false;
    for (int i = 0; i < text.length(); i++)
    {
        if (text[i] != ' ')
        {
            if (word==false)
            {
                count++;
                word=true;
            }
        }
        else
    {
        word=false;
    }
    }
    return count;
}