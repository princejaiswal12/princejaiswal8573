#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter  a number : ";
    cin>>n;
    
    for (int i = 1; i <= n; i++)
    {
        int factorial=1;
        for (int j = 1 ; j <= i; j++)
        {
            factorial=factorial*j;
            
        }
        cout<<factorial<<" ";
    }
    
    
}
    