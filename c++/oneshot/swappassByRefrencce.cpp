#include<iostream>
using namespace std;
void swap(int& x,int& y){  //no other dubbe or created the value pass by reference
    cout<<&x<<endl; //same address
    int temp=x;
    x=y;
    y=temp;
    // cout<<x<<" "<<y<<endl;
}
int main(){
    int x;
    cout<<"Enter 1st number : ";
    cin>>x;
    int y;
    cout<<"Enter  2nd number : ";
    cin>>y;
    cout<<&x<<endl; //same address
    cout<<x<<" "<<y<<endl;
    swap(x,y);
    cout<<x<<" "<<y<<endl;
}