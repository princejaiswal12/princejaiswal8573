#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter  a number : ";
    cin>>n;
    int sum = 0 ;
    int y;
    
    while (n!=0)
    {
        y=n%10;
        sum=sum+y;
        n=n/10;
           
    }
    cout<<sum;
}
    