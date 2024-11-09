//Find the element x in the array . Take array and
//x as input

#include<iostream>
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
    int x;
    cout<<"Enter the element you want to search ";
    cin>>x;

    //search

    // check mark 
    bool flag =false; //false means element is not present 

    for(int i=0;i<=(n-1);i++){
        if(arr[i]==x) flag = true;  //if bool not introduced then it will repeatedly type 
        }                           //element is present and element not found
        if(flag==true) cout<<"element is present ";
        else cout<<"Element not found ";
           
    }


