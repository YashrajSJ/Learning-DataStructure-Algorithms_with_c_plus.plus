//take a positive integers input and tell if it it even or odd
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a number : ";
    int n;
    cin>>n;
    if (n%2==0)
    {
        cout<<"Even";
    }
    else{
        cout<<"Odd";
    }
}