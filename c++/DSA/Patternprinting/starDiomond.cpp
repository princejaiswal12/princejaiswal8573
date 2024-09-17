#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number";
    cin>>n;
    int spa=n-1;
    int star=1;
    for (int i = 1; i <= 2*n-1; i++){
        for (int j = 1; j <= spa; j++){
            cout<<" ";
        }
        for (int k = 1; k <= star; k++){
            cout<<"*";
        }
        cout<<endl;
        if(i<=n-1){
            spa--;
            star+=2;
        }
        else{
            spa++;
            star-=2;
        } 
    }
}
    
    
