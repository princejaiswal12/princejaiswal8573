#include<iostream>
using namespace std;
int power(int a,int b){
    if(b==0) return 1;
    if(b==1) return a;
    return a * power(a,b-1);
}
int main(){
    int a;
    cout<<"Enter 1st number : ";
    cin>>a;
    int b;
    cout<<"Enter 1st number : ";
    cin>>b;
    cout<<power(a,b);
}
    