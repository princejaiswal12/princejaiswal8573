#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number";
    cin>>n;
    int m=n-1;
    int star = m;
    int spa = 1;
    for (int i = 1; i <= 2*n-1; i++){
        cout<<i;
    }
    cout<<endl;
    for (int i = 1; i <= m; i++){
        int a=1;
        for (int j = 1; j <= star; j++){
            cout<<a;
            a++;
        }
        for (int k = 1; k <= spa; k++){
            cout<<" ";
            a++;
        }
        for (int j = 1; j <= star; j++){
            cout<<a;
            a++;
        }
        star--;
        spa+=2;
        cout<<endl;
    }
}
    
    
