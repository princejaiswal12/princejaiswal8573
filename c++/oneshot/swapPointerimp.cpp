#include<iostream>
using namespace std;
void swap(int* a,int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
    cout<<a<<" "<<b<<endl;

}
int main(){
    int x;
    cout<<"Enter 1st number : ";
    cin>>x;
    int y;
    cout<<"Enter  2nd number : ";
    cin>>y;
    cout<<&x<<" "<<&y<<endl;
    cout<<x<<" "<<y<<endl;
    swap(&x,&y);
    cout<<x<<" "<<y<<endl;
}
    