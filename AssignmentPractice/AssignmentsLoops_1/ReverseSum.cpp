//WAP to print the sum of a given number and its reverse.

#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a number ";
    int n;
    cin>>n;
    int a=n;
    int reverse=0;
    int lastdigit;
    while(n>0){
        lastdigit=n%10;
        reverse=reverse*10;
        reverse=reverse+lastdigit;
        n=n/10;
    }
    cout<<a+reverse;
}