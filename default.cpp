#include<iostream>
using namespace std;
float area(float fRadius,float PI=3.14)
{
    float fAns=0.0;
    fAns=PI*fRadius*fRadius;
    return fAns;

}
int main()
{
    float fRet=0.0;
    fRet=area(10.4,7.2);
    cout<<fRet<<"\n";
    fRet=area(10.6);
    cout<<fRet<<"\n";
    return 0;

}