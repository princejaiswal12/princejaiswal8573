#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,5,4,6,8,0,7};
    int n = sizeof(arr)/4;
    int brr[sizeof(arr)/4];
     
    for (int i = 0; i < sizeof(arr)/4; i++)
    {
        brr[i]=arr[n-i-1]; 
        cout<<brr[i]<<" ";
    }
}
    