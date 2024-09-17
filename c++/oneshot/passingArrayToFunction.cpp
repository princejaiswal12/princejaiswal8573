#include<iostream>
using namespace std;
void changed(int brr[]){
    brr[0]=100;
}
int main(){
    int arr[]={1,2,3,4,5};
    for (int  i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    changed(arr);//pass by reference
    for (int  i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
}
    