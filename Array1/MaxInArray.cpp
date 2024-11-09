//Find the maximum value out of all the elements in the array.

#include<iostream>
//#include<climits>
using namespace std;
int main (){
    int n;
    cout<<"Enter the size of array ";
    cin>>n;
    int arr[n];
    
    //input
    cout<<"Enter the elements in array ";
    for(int i=0;i<=(n-1);i++){
        cin>>arr[i];
    }
    int max =arr[0];        //or give a very low value in int max put INT32_MIN
                            //for this use #include<climits> after 3rd line
    // int max = INT_MIN;
    for(int i=1;i<=(n-1);i++){
        if(max<arr[i]) max=arr[i];
    }
        cout<<"The max element is"<<max;
           
    }
