#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,3,2,1};
    int n = sizeof(arr)/4;
    int j=n-1;
    int i=0;
    int flag=1;
    while (i<j)
    {
        if(arr[i]!=arr[j]){
            flag=0;
            break;
        }
        i++;
        j--;
    }
    if(flag==1) {
        cout<<"palindrome arry";
        }
    else {
        cout<<"not a palindrome array";
        }
}
    