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
int permitation(int n ,int r){
    int c =fact(n)/(fact(n-r));
    return c;
}

int main(){
    int n;
    cout<<"Enter 1st number : ";
    cin>>n;
    int r;
    cout<<"Enter  2nd number : ";
    cin>>r;
    cout<<permitation(n,r);
}
    