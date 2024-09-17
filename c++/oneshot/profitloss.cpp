#include<iostream>
using namespace std;
int main(){
   int sp ,cp;
   cout<<"Enter cost price  : " ;
   cin>>cp;
   cout<<"Enter selling  price  : " ;
   cin>>sp;
   if (sp>cp)
   {
    cout<<"profit is : "<<sp-cp;
   }
   else if (cp>sp)
   {
    cout<<"loss is : "<<cp-sp;
  
   }
   else
   {
    cout<<"no profit no loss";
   }
   
   
}