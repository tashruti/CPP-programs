#include<iostream>
#include<malloc.h>

using namespace std;

class demo
{
    public:
    int i;
    demo(int x)
    {
        i=x;
        cout<<"inside constructor\n";
    }
    ~demo()
    {
        cout<<"inside destructor\n";
    }
};
int main()
{
    cout<<"allocating memory for object by using malloc\n";
    demo*p1=(demo*)malloc(sizeof(demo));
    
    cout<<"frreing the memory by allocating malloc\n";
    free(p1);

    cout<<"in case of malloc and free constructor and destructor is not called\n";
    cout<<"allocating memory for object using new\n";

    demo*p2=new demo(10);
    cout<<"freeing the memory  allocated by new\n";
    delete p2;

    return 0;


}

    


