//Sum of digits of a given number

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number ";
    cin>>n;
    int LastDigit=0;
    int Sum=0;
    while(n>0){
       LastDigit=  n%10;
       Sum= Sum+LastDigit;
       n= n/10;

    }
     cout<<"Sum of digits of number is : "<<Sum;  //initially sum has value 0 so if n=0 then 
                                                  //also sum=0
}