#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number";
    cin>>n;
    int m=n-1;
    int star = m;
    int spa = 1;
    for (int i = 1; i <= 2*n-1; i++)
    {
        cout<<i;
    }
    cout<<endl;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= star; j++)
        {
            cout<<j;
        }
        for (int k = 1; k <= spa; k++)
        {
            cout<<" ";
        }
        for (int j = 1; j <= star; j++)
        {
            cout<<j+n+i-1;
        }
        star--;
        spa+=2;
        cout<<endl;
    }
    
    }
    
    
