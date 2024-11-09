//Calculate the sum of all the elements in the
//given array.

#include<iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
    cout<<"Enter the number of elements ";
    cin>>n;
    int arr[n];
    for(int i=0;i<=(n-1);i++){
        cout<<"Enter the  respective elements ";
        cin>>arr[i];
    }
    for(int i=0;i<=(n-1);i++){
        sum=sum+arr[i];
    }
    cout<<"Sum of elements is "<<sum;


}