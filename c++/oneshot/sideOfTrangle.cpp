#include<iostream>
using namespace std;
int main(){
   int x,y,z;
   cout<<"Enter first side  : " ;
   cin>>x;
   cout<<"Enter second side  : " ;
   cin>>y;
   cout<<"Enter third side  : " ;
   cin>>z;
   if ((x+y)>z && (x+z)>y && (y+z)>x )
   {
        cout<<"triangle is  possible";
   }
   else
   {
        cout<<"triangle is not possible";
   }

   
  
}