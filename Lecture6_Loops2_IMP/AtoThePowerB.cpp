//Two numbers are entered through the
//keyboard. Write a program to find the value of one
//number raised to the power of another.

#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the base ";
    cin>>a;
    int b;
    cout<<"Enter the exponent ";
    cin>>b;
    float power=1 ;
    int m=b;
    if(m<0){m=-m;}
    for(int i=1;i<=m;i++){
        power=power*a;
       
    }
    if(a==0 && b==0) cout<<"Not defined";

    else if(b<0)
     {float k=1/power;
     cout<<a<<" raised to the power "<<b<<" is "<<k;}

    else cout<<a<<" raised to the power "<<b<<" is "<<power;
   
}