#include<iostream>
using namespace std;
int fibo(int n){
    if(n==1 || n==2) return n-1;
    return fibo(n-1)+fibo(n-2);
}
int main(){
    int x;
    cout<<"Enter 1st number : ";
    cin>>x;
    for (int i = 1; i <= x; i++)
    {
        cout<<fibo(i)<<" ";
    }
    
}
    