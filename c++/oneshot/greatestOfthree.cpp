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
   if(x>y && x>z)
   {
        cout<<x<<"is greatest";
   }
   else if (y>x &&y>z)
   {
    cout<<y<<"is greatest";
   }
   
   else
   {
        cout<<z<<"is greatest";
   }

   
  
}