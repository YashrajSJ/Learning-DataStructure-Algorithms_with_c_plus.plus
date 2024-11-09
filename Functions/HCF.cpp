//Code to find HCF of 2 nummbers

#include<iostream>
using namespace std;

int gcd(int a ,int b){      //gcd is name of function (greatest common divisor)
    int hcf=1;
    for(int i=min(a,b);i<=1;i--){
        if(a%i==0 && b%i==0){       //loop ulta chalao toh highest number pehle hi mil jaega
            hcf=i;                  //time to run code kam hoga
            break;
        }
    }
    return hcf;
}


int main(){
    int a;
    cout<<"Enter first number ";
    cin>>a;
    int b;
    cout<<"Enter second number ";
    cin>>b;
    cout<<gcd(a,b);
    
}

