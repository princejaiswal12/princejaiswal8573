#include<iostream>
using namespace std;

int main(){
    int arr[5];//declaration
    cout<<"Enter array elements : ";
    for(int i=0;i<=4;i++){
        cin>>arr[i];
    }
    for(int i=0;i<=4;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    arr[0]=100;
    for(int i=0;i<=4;i++){
        cout<<arr[i]<<" ";
    }



}
    