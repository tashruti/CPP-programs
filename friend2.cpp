#include<iostream>
using namespace std;
class Hello
{
    public:
    void fun();

};
class Demo
{
    public:
    int i;
    protected:
    int j;
    private:
    int k;
    public:
    Demo()
    {
        i=10;
        j=20;
        k=30;

    }
    friend void Hello::fun();
};
void Hello::fun()
{
    Demo obj;
    cout<<obj.i<<"\n";
    cout<<obj.j<<"\n";
    cout<<obj.k<<"\n";
}
    int main()
    {
        Hello hobj;
        hobj.fun();
        return 0;
    }


