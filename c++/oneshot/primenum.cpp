#include<iostream>
using namespace std;

int main(){
    int n ;
    cout<<"Enter N ";
    cin>>n;
    bool x = true;
    for (int i = 2; i <= n/2; i++)         
    {
        if(n%i==0)
        {
        x=false;
        break;
        }        
    }
    if (n==1)
    {
        cout<<"Neither prime nor composite";
    }
    
    if(x==false) cout<<"composite number";
    else cout<<"prime number";
}
    