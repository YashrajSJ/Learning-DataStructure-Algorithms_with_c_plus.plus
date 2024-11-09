//Take positive integer input and tell if it
//is divisible by 5 or 3.

#include<iostream>
using namespace std;
int main (){
    cout<<"Enter a number : ";
    int x;
    cin>>x ;
    if(x%5==0 || x%3==0){
        cout<<"The number is divisible by 3 or 5";

    }
    else{
        cout<<"The number is not divisible by 5 or 3";
    }

}