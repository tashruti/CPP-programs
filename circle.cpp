#include<iostream>
using namespace std;
class Circle
{
    public:
    float r;
    void getData();
    float findArea();
    float findCircum();

};
void getData()
{

    cout<<"enter radius of circle:";
    cin>>r;
}

void findArea()
{
    
    return(3.14*r*r);
}

void findCircum()
{
    
    return(2*3.14*r);
}
int main()
{
    Circle c;
    c.getData();
    c.findArea();
    
    cout<<"\ncircumferance of circle=",(findCircum);
    c.findCircum();
     cout<<"\narea of circle=",(findArea);
    cout<<endl;
    return 0;

}




