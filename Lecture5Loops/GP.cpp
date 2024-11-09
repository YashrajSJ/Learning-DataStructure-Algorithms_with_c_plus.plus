// Print GP upto n terms 2,8,32,128...

#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the value of n : ";
    int n;
    cin>>n;
    int a=2;
    for(int i=1;i<=n;i++){
        cout<<a<<endl;
        a=a*4;              // here r is 4 
    }

}