#include<iostream>
using namespace std;
int sum(int a ,int b){
    return a+b;
}

int main(){
    int n;
    cout<<"Enter 1st number : ";
    cin>>n;
    int m;
    cout<<"Enter  2nd number : ";
    cin>>m;
    cout<<sum(n,m);
}
    