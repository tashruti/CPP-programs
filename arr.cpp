#include<iostream>
using namespace std;
int main()

{
    int arr[50],tot,i;
    cout<<"enter the size:";
    cin>>tot;
    cout<<"enter "<<tot<<"number:";
    for(i=0;i<tot;i++)
    cin>>arr[i];
    cout<<"\n array with index:";
    for(i=0;i<tot;i++)
    cout<<"arr["<<i<<"]"<<"\t\t\t""<<arr[i]";
    cout<<endl;
    return 0;
    

}
