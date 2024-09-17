#include<iostream>
using namespace std;
void display(int arr[]){
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
void change(int arr[]){
    arr[1]=100;
}   
int main(){
    int arr[]={1,2,3,4,5,6};
    display(arr);
    change(arr);
    display(arr);
}