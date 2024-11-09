//using different functions and calling functions 

#include<iostream>
using namespace std;
void startriangle(int x){       //int x here in paranthesis is argument
    for(int i=1;i<=x;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
        //first int main function works than any other
        //code will first go inside int main than see that there is another function calling 
        //named startriangle so then it will go to the startriangle function
int main(){
    startriangle(3);        //x in argument will take value 3  (function calling)
    cout<<"Hello world"<<endl;
    startriangle(4);
    startriangle(5);
}