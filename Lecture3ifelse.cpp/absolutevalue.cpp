//Given an integer print the absolute value of integer
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a number : ";
    int x;
    cin>>x;
    if(x>0){
        cout<<"The absolute value of the integer is : "<<x;
    }
    else{
        cout<<"The absolute value of the integer is : "<<-x;
    }
}

    // METHOD 2
    #include<iostream>
using namespace std;
int main(){
    cout<<"Enter a number : ";
    int x;
    cin>>x;
    if(x<0){
        x=-x;   //new bucket of x is minus of previous x
    }           //which will happen if x<0
    cout<<x;    
}