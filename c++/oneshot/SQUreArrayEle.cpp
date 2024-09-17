#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,5,4,6,8,0,7};
    for (int  i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
     
    for (int i = 1; i < sizeof(arr)/4; i++)
    {
         arr[i]=arr[i]*arr[i];  
    }
    for (int  i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    
     
}
    