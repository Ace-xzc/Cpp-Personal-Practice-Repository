#include <iostream>
using namespace std;
class Cube
{   
    private:
        int m_H=0,m_W=0,m_L=0;

    public:
        void setH(int H)
        {
            m_H=H;
        }

        int getH()
        {
            return m_H;
        }

        void setW(int W)
        {
            m_W=W;
        }

        int getW()
        {
            return m_W;
        }

        void setL(int L)
        {
            m_L=L;
        }

        int getL()
        {
            return m_L;
        }

        int S()
        {
            return (m_L*m_W+m_W*m_H+m_H*m_L)*2;
        }

        int V()
        {
            return m_H*m_W*m_L;
        }
        bool same1 (Cube &c)//成员
        {
            if(m_H==c.getH() && m_L==c.getL() && m_W==c.getW())
            {
                return true;
            }
            else
                return false;
        }

        
};
bool same2 (Cube &c,Cube&c1)//全局
{
    if (c.getH()==c1.getH()&&c.getL()==c1.getL()&&c.getW()==c1.getW())
    {
        return true;
    }
    else
        return false;
    
}

int main()
{
    Cube c,c1;
    c.setH(10);
    c.setL(10);
    c.setW(10);
    c1.setH(10);
    c1.setL(10);
    c1.setW(10);
    cout<<"面积："<<c.S()<<"\n"<<"体积："<<c.V()<<endl;
    bool ret =same2(c,c1);
    {
    if(ret)
    cout<<"（全局）相等"<<endl;
    else
    cout<<"（全局）不相等"<<endl;
    }
    bool rett =c.same1(c1);//成员
    {
    if(rett)
    cout<<"（成员）相等"<<endl;
    else
    cout<<"（成员）不相等"<<endl;
    }
    return 0;
}