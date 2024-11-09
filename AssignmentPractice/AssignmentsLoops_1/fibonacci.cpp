//Print first ‘n’ fibonacci numbers.

#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a number ";
    int n;
    cin>>n;
    int a=1 , b=1 , sum;
    cout<<b<<" "<<b<<" ";
    for(int i=3;i<=n;i++){
        sum=a+b;
        a=b;
        b=sum;
        cout<<b<<" ";


    }

}