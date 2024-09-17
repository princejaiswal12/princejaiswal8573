#include<iostream>
using namespace std;
int main(){
   int x,y,z;
   cout<<"Enter first number  : " ;
   cin>>x;
   cout<<"Enter second number : " ;
   cin>>y;
   cout<<"Enter third number  : " ;
   cin>>z;
   if(x>y)
   {
        if (x>z)
        {
            cout<<x<<"is greatest";
        }
        else
        {
            cout<<z<<"is greatest";
        }
        
        
   }
   else
        if (y>z)
        {
            cout<<y<<"is greatest";
        }
        else
        {
            cout<<z<<"is greatest";
        }
        
        
   }

   
  
