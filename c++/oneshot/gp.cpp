#include<iostream>
using namespace std;

int main(){
    int n ;
    cout<<"Enter N";
    cin>>n;
    int x = 1;
    // 1 2 4 8 16 ....ntimes
    
    for (int i = 0; i < n; i++)         
    {
        cout<<x<<" ";
        x=x*2;
        
    }

}
    