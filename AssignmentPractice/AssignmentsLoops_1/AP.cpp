//Display this AP - 4,7,10,13,16.. upto ‘n’ terms.


#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the value of n ";
    int n;
    cin>>n;
    int a=4;
    for(int i=1;i<=n;i++){
        cout<<a<<", ";
        a=a+3;

    }
}