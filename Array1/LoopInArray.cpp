#include<iostream>
using namespace std;
int main(){
    int arr[6];

    //input from user
    cout<<"Give inputs ";
    for(int i=0;i<=5;i++){
        cin>>arr[i];
    }
    //output
    for(int i=0;i<=5;i++){
        cout<<arr[i]<<endl;
    }
}