#include<iostream>
using namespace std;
int main()
{
    int *p;
    int arr[]={1,2,3,4,5,6};
    p=arr;
    for(int i=0;i<6;i++)
    {
        cout<<*p;
        p++;

    }
    return 0;
}