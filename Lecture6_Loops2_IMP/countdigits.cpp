//WAP to count digits of a given number.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number ";
    cin>>n;
    int a=n;        // If n initially is 0 for that
    int count=0;        //How many digits in number are there initially it is 0
    while (n>0)
    {
        n= n/10;
        count = count + 1;

    }
    if(a==0) cout<<1;
    else {cout<<count;}         //if not written else and directly cout<<count; then when n=0
                                // it will print 1 for previous line and 0 for count 

}