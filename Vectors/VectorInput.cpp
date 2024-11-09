// Take input from user for vector 
        
#include<iostream>
#include<vector>
using namespace std;
int main (){

    //         //METHOD-1

    // vector<int>v(5);
    // for(int i=0;i<v.size();i++){
    //     cin>>v[i];
    // }
    //  for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }

            //METHOD -2
    vector<int> v;              //This is called dynamic array 
    cout<<"Enter the vector ";
    for(int i=0;i<5;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<5;i++){
        cout<<v[i]<<" ";
    }

}