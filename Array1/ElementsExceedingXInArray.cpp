//Count the number of elements in given array
//greater than a given number x.

#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array ";
    cin>>n;
    int arr[n];
    
    //input
    for(int i=0;i<=(n-1);i++){
        cin>>arr[i];
    }

    int x;
    cout<<"Enter the element x ";
    cin>>x;

    int count=0;        //to count number of elements greater than x

    for(int i=0;i<=(n-1);i++){
        if(x<arr[i]) count++;
    }
    cout<<"The nummber of elements greater than x are "<<count;
}