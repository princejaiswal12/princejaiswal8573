#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the number : ";
    cin>>x;
    // if (x>=0)
    // {
    //     cout<<"abslute value is : "<< x;
    // }
    // else
    // {
    //     cout<<"abslute value is : "<<-x;
    // }
    
    // if you want to change n into abslute value 
    if (x<0)
    {
        x=-x;
    }
    
    cout<<x;
    
}