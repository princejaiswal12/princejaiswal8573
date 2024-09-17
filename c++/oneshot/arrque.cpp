#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,5,4,6,8,0,7};
    for (int  i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    for (int i = 0; i < sizeof(arr)/4; i++)
    {
       if (i%2==0)
       {
        arr[i]=arr[i]+10;
       }
       else
       {
        arr[i]=arr[i]*2;
       }
    }
    for (int  i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    
     
}
    