#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int arr[]={1,2,3,5,4,6,8,0,7};
    int mx = INT32_MIN ;
    for (int i = 0; i < sizeof(arr)/4; i++)
    {
        mx=max(mx,arr[i]);
    }
    cout<<mx<<endl;
    int smax=INT32_MIN;
    for (int i = 0; i < sizeof(arr)/4; i++)
    {
        if (arr[i]!=mx)
        {
            smax=max(smax,arr[i]);
        }
    }
    cout<<smax;
     
}
    