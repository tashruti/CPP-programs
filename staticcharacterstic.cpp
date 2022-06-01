#include<iostream>
using namespace std;
class Demo
{
    public:
    int i,j;
    static int x;
    Demo()
    {
        cout<<"inside default constructor\n";
        i=10;
        j=20;
    }
};
int Demo::x=30;
int main()
{
    cout<<Demo::x<<"\n";
    return 0;
}