// to check if a number is prime or not.


#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a number : ";
    int n;
    cin>>n;
    bool flag = true;
    for(int i=2 ; i<=n-1;i++){
        if(n%i==0){
           flag = false ;
           break;
        }
    }
    if(n==1) cout<<"1 is nither prime nor composite";
    else if (flag==true) cout<<"Number is prime";
    else {cout<<"Number is composite";
    }

}