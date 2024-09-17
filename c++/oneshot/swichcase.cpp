#include<iostream>
using namespace std;
int main(){
   int x,y;
   char ch;
   cout<<"Enter first operand  : " ;
   cin>>x;
   cout<<"Enter operator : " ;
   cin>>ch;
   cout<<"Enter second operand : " ;
   cin>>y;
   switch (ch)
   {
   case '+':
    cout<<x+y;
    break;
    case '-':
    cout<<x-y;
    break;
    case '*':
    cout<<x*y;
    break;
    case '/':
    cout<<x/y;
    break;
   
   default:
   cout<<"invalid operator";
    break;
   }
   
        
   }

   
  
