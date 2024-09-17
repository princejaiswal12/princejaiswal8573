#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter  a number : ";
    cin>>n;
    int reverse = 0 ;
    int y;
    
    while (n!=0)
    {
        y=n%10;
        reverse=reverse*10+y;
        n=n/10;
           
    }
    cout<<reverse;
}
    