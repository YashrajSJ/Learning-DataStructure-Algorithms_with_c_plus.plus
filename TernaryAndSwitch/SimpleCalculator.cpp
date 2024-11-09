#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the values ";
    int x,y;
    char op;
    cin>>x>>op>>y;
    if(op=='+') cout<<x+y;
    if (op=='-') cout<<x-y;
    if(op=='*') cout<<x*y;
    if(op== '/') cout<<x/y;

//    // METHOD 2 BY SWITCH
//    switch (op){
//     case  '+' :
//     cout<<x+y;
//     break;
//     case  '-' :
//     cout<<x-y;
//     break;
//     case  '*' :
//     cout<<x*y;
//     break;
//     case  '/' :
//     cout<<x+y;
//     break;
    
//   }

}