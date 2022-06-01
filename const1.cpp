#include<iostream>
using namespace std;
class Demo
{
    public:
    int i;
    const int j;
    Demo(int a,int b):j(b)
    {
        i=a;

    }

    void fun()
    {
        cout<<"inside fun\n";
        i++;
    }
    void gun(int a,const )const
    {
        int x=10;
        const int y=20;
        cout<<"inside gun\n";
        x++;
        a++;
    }
};
int main()
{
    Demo obj1(11,21);
    const Demo obj2(11,21);
    obj1.fun();
    obj1.gun(10,20);
    obj2.fun();
    obj2.gun(10,20);
    return 0;
}