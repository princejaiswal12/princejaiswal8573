#include<iostream>
using namespace std;
int HCF(int a,int b){
    int hcf=1;
    for (int i = 1; i <= min(a,b); i++)
    {
        if(a%i==0&&b%i==0){
            hcf=i;
        }
    }
    return hcf;
}
int main(){
    int a;
    cout<<"enter first number : ";
    cin>>a;
    int b;
    cout<<"enter second  number : ";
    cin>>b;
    cout<<HCF(a,b);
    
}