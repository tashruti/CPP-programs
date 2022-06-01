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
         cout<<"Base destructor\n";
     }
 };
 class Derived:public Base
 {
     public:
     int a,b,c;
     Derived()
     {
         cout<<"Derived constuctor\n";
     }
     ~Derived()
     {
         cout<<"Derived Destuctor\n";
     }
 };
 int main()
 {
     Derived dobj;
     return 0;
 }

 
 