#include<iostream>
using namespace std;
 
int main(){
    int n;
    cout<<"Enter the number";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int flag = false;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==8)
        {
           flag = true;
           break;
        }
    }
    if (flag==true)     
    {
        cout<<"number is present";
    }
    else
    {
        cout<<"number is not present";
    }
    
    
}