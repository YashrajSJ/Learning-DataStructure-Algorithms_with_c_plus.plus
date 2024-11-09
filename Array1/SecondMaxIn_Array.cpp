// Find second max element in array

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

    int max= INT_MIN;
    int smax= INT_MIN;   //smax= second max

    // for finding max
    for(int i=0;i<=(n-1);i++){
        if(max<arr[i]) max=arr[i];
    }

    //for finding second max
    for(int i=0;i<=(n-1);i++){
        if(smax<arr[i] && arr[i]!=max) smax=arr[i];
    }
    cout<<"The second max element in the array is "<<smax<<endl;
    
}