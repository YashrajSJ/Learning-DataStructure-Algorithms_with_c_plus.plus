//Ques : Write a program to copy the contents of one
// array into another in the reverse order.

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int n;
    cout<<"Enter the size of array ";
    cin>>n;
    cout<<"Enter the array ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    vector<int> rev;
    for(int i=0;i<n;i++){
        rev.push_back(v[n-1-i]);
    }
    for(int j=0;j<n;j++){
        cout<<rev[j]<<" ";
    }
}