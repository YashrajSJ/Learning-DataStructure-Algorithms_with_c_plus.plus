//Given two numbers a and b, write a function to print all odd numbers between them.

#include<iostream>
using namespace std;
int main(){
int a,b;
cout<<"Enter the two numbers ";
cin>>a>>b;
if(a%2==0){
    for(int i=(a+1);i<=b;i=i+2){
        cout<<i<<endl;
    }
}


}