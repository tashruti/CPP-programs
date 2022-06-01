#include<iostream>
using namespace std;
class base
{
    public:
    base()
    {
        cout<<"in base constructor\n";

    }
    virtual ~base()=0;
};
base::~base()
{
    cout<<"base destructor\n";

}
class derived1:public base
{
    public:
    derived1()
    {
        cout<<"inside derived1 constructor\n";
    }
    ~derived1()
    {
        cout<<"inside derived destructor\n";
    }
};
int main()
{
    derived1 obj;
    return 0;
    
}