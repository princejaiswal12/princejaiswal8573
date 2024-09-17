#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter  number : ";
    cin>>n;
    int mid =n/2+1;
    int a;
    int b;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < n-i+1 ; j++)
        {
            a = j;
             cout<<"  ";
        }
        for (int k = 1; k <=2*i-1 ; k++)
        {
            cout<<"* ";
            b = k;
        }
        cout<<endl; 
    }
    
}
    