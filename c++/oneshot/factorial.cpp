#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter  a number : ";
    cin>>n;
    int factorial=1;
    int i=1;
    while (i<=n)
    {
        factorial=factorial*i;
        i++;
           
    }
    cout<<factorial;
}
    