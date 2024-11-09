#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a number : ";
    int x;
    cin>>x;
    if(x%5==0){
        if(x%3==0){
            cout<<"Entered number is divisible by 5 and 3";
        }
        else{
            cout<<"Condition not matched";  //x%5==0 but x%3!=0
        }
        
    }
    else{
        cout<<"Condition unmatched";
    }
}