#include<iostream>
using namespace std;
void print(int n){
    if(n==0) return;
    print(n-1);
    cout<<n<<endl;

}
int main(){
    int x;
    cout<<"Enter 1st number : ";
    cin>>x;
    print(x);
}
    