#include<iostream>
#include<string.h>
using namespace std;
class base
{
    public:
    int *p;
    base()
    {
        cout<<"inside default constructor\n";
        p=new int;
    }
    base(int i)
    {
        cout<<"inside parametrised constructor with one parameter\n";
        p=new int[i];
        
    }
    base(int i,int j,int k=10)
    {
        cout<<"inside parametrised constructor with default argument\n";
        p=new int(i+k);
    }
    base(base&bref)
    {
        cout<<"inside copy constructor\n";
        p=new int[40];
        memcpy(p,bref.p,40);

    }
    ~base()
    {
        cout<<"inside destructor\n";

    }
};
int main()
{
    base obj1;

    base obj2(obj1);

    base obj3(10);

    base obj4(10,20);

    return 0;
}
