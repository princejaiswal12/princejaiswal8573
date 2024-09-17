#include<iostream>
using namespace std;
int fact(int n){
    int fact =1;
    for (int i = 1; i <= n; i++){
        fact=fact*i;
    }
    return fact;
}
int main(){
    int n;
    cout<<"Enter the number";
    cin>>n;
    // for (int i = 1; i <= n; i++){
    //     cout<<factorial(i)<<endl;
    // }
    int fact =1;
    for (int i = 1; i <= n; i++){ //more better code
        fact=fact*i;
        cout<<fact<<endl;
    }
}