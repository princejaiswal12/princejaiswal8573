#include<iostream>
using namespace std;

int main(){
    int n ;
    cout<<"Enter N";
    cin>>n;
    int x = 4;
    // 4 7 10 ....ntimes
    //for (int i = 4; i <=3*n+1; i+=3) cout<<i<<" ";
    for (int i = 0; i < n; i++)         
    {
        cout<<x<<" ";
        x=x+3;
        
    }

}
    