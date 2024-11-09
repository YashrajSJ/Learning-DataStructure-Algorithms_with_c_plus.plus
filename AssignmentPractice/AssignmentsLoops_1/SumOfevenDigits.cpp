//WAP to print the sum of all the even digits of a given number.

#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a number ";
    int n;
    cin>>n;
    int sum=0;
     int r;
    while(n>0){
        r= n%10;
        if(r%2==0){
            sum=sum+r;
        }
        n=n/10;
    }
    cout<<sum;
}