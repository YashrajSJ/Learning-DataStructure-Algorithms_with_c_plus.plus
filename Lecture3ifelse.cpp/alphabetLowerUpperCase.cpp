//Predict whether entered value is lower case alphabet or upper case alphabet 
#include<iostream>
using namespace std;
int main (){
    cout<<"Enter the value : ";
    char ch;
    cin>>ch;

    int y=(int)ch;
    
    if(y >= 97 && y<= 122   ){
        cout<<"Entered value is lower case alphabet";
    }
    if(y>=65 && y<=90){
        cout<<"Entered value is upper case alphabet";
    }
    
   
}