#include<iostream>
using namespace std;
int main()
{
    int decimalnum,binarynum[20],i=0;
cout<<"enter the decimal number:";
    cin>>decimalnum;
    while(decimalnum!=0)
    {


        binarynum[i]=decimalnum%2;
        i++;
        decimalnum=decimalnum/2;

    }
    cout<<"equvailent binary value:";
    for(i=(i-1) ;i>=0;i--)
    cout<<"binarynum[i]";
    cout<<endl;
    return 0;
    
}