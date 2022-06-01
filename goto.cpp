#include<iostream>
using namespace std;
int main()
{
    ineligible:
    cout<<"you are not eligible for vote!\n";

    cout<<"enter your age:";
    int age;
    cin>>age;

    if(age<18)
    {
        goto ineligible;

    }
    else
    {
        cout<<"you are eligible for vote!\n";
    }
    return 0;

}