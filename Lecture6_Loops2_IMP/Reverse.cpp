//WAP to print reverse of a given number.


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number ";
    cin>>n;
    int LastDigit;
    int Reverse =0 ;
    while(n>0){
        Reverse=Reverse*10;
        LastDigit= n%10;
        Reverse=Reverse+ LastDigit;
        n=n/10;
    }
    cout<<Reverse;
}