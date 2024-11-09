//Take positive integer input and tell if it
//is divisible by 5 or 3 but not divisible by 15.
// METHOD - 1
#include<iostream>
using namespace std;
int main (){
    cout<<"Enter a number : ";
    int y;
    cin>>y;
    if ((y%3==0 || y%5==0) && y%15!=0){
        cout<<"Entered number is divisibe ny 3 or 5 but not by 15";
    }
    else{cout<<"Given condition does not match";}
}

// METHOD - 2  (NESTED IF ELSE)
#include<iostream>
using namespace std;
int main (){
    cout<<"Enter a number : ";
    int y;
    cin>>y;
    if (y%3==0 || y%5==0 ){
        if( y%15!=0)
        cout<<"Entered number is divisibe ny 3 or 5 but not by 15";
        else{cout<<"Not matching condition";}  //FOR DIVISIBLE BY 3 OR 5 BUT NOT BY 15
    }

    else{cout<<"Given condition does not match";}  //FOR NOT DIVISIBLE BY 3 OR 5
}


