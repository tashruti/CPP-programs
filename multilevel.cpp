#include<iostream>
using namespace std;
class Base
{
    public:
    int i,j;
    Base()
    {
        cout<<"Base constuctor\n";

    }
    ~Base()
    {
        cout<<"Base destuctor\n";

    }
};
class Derived public:Base
{
    public:
    int a,b,c;
    Derived()
    {
        cout<<"Derived constructon";

    }
    ~Derived()
    {
        cout<<"Derived destructor\n";

    }

};
class Derived1 public:Derived
{
    public:
    int k,l;
    Derived1()
    {
        cout<<"Derived constructor\n";
    }
    ~Derived1()
    {
        cout<<"Derived destructor\n";

    }
};
int main()
{
    Derived dobj;
    return 0;
}
    


    

    

    
