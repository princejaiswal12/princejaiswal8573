#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    for (int  i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int sum = 0 ;
    for (int i = 0; i < sizeof(arr)/4; i++)
    {
        sum =sum+arr[i];
    }
    cout<<sum;
     
}
    