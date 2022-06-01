#include<iostream>
using namespace std;
class base
{
    public:
    int x,y;
    int Addition(int a,int b)
    {
        return a+b;

    }
    virtual int sub(int a,int b)=0;
};
class derived:public base
{
    public:
    int i,j;
    int sub(int a,int b)
    {
        return a-b;
    }
    int mult(int a,int b)
    {
        return a*b;

    }
};
int main()
{
    base *bp=new derived();
    int ret=0;
    ret=bp->Addition(11,10);
    cout<<ret<<"\n";
    return 0;
}



