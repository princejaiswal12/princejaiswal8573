#include<iostream>
using namespace std;
int fact(int a){
    int f = 1;
    for (int i = 1; i <= a; i++)
    {
        f *= i;
    }
    return f;
}
int combination(int n ,int r){
    int c =fact(n)/(fact(r)*fact(n-r));
    return c;
}

int main(){
    int n;
    cout<<"Enter 1st number : ";
    cin>>n;
    for (int i = 0; i <= n; i++)
    {
        for (int k = 0; k <= n-i-1; k++)
        {
            cout<<" ";
        }
        
        for (int  j = 0; j <= i; j++)
        {
            
            cout<<combination(i,j);
            cout<<" ";
        }
        cout<<endl;
        
    }
    
}
    