#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,5,4,6,8,0,9};
    int n = sizeof(arr)/4;
    int j=n-1;
    int i=0;
    while (i<j)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
    