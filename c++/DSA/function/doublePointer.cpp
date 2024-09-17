#include<iostream>
using namespace std;

int main(){
    int x=5;
    int* ptr =&x;
    int** p = &ptr; //it store address of a pointer
    cout<<x<<endl;
    cout<<&x<<endl;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    cout<<p<<endl; //address of ptr 
}