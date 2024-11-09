//Show if a number is 3 digit number or not 

#include<iostream>
using namespace std;
int main(){
   cout<<"Enter a number : ";
   int n;
   cin>>n;
   if(n>=100 && n<=999) {
    cout<<n;
   }
   else{
    cout<<"the number is not 3 digit number";
   }
}