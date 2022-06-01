#include<iostream>
using namespace std;
int main()
{

    int ncall,temp,charge;
    cout<<"enter total number of call made:";
    cin>>ncall;
    if(ncall<=150)
    cout<<"\n no charge!";
    else
    {
        ncall=ncall-150;
        if(temp<=250)
        charge=temp*1;
        else
        {
            temp=ncall-250;
            charge=250+(temp*2);

        }
        cout<<"\ntotal phone bill to paid:"<<charge;
        


    }

    cout<<endl;
    return 0;
    
}