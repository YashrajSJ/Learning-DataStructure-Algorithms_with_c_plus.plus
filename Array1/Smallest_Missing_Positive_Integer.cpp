//WAP to find the smallest missing positive element in the sorted Array that contains only positive elements.

#include<iostream>
#include<climits>
using namespace std;
int main (){
      int n;
    cout<<"Enter the size of array ";
    cin>>n;
    int arr[n];
    
    //input
    for(int i=0;i<=(n-1);i++){
        cin>>arr[i];
    }
    bool flag=false;
    int x=-2000;

    for(int i=0;i<=(n-1);i++){
        flag=false;
        if(arr[i]>0) flag=true;
       
        if(x<arr[i] && flag=true) 

    }

    
}
