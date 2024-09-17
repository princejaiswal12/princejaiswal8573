#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the number";
    cin>>a;
    int b;
    cout<<"Enter the number";
    cin>>b;
    // int temp = a;
    // a = b;
    // b = temp;
    a = a + b;
    b = a - b;
    a = a - b;
    cout<<a<<" "<<b<<endl;
}