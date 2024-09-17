#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter  row number : ";
    cin>>n;
    int m;
    cout<<"Enter  row number : ";
    cin>>m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    
}
    