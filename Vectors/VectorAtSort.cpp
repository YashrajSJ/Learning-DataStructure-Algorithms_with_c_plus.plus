#include<iostream>
#include<vector>
#include<algorithm>         //include this to use sort function
using namespace std;
int main(){
    vector<int> v;  
    v.push_back(7);
    v.push_back(9);
    v.push_back(3);
    v.push_back(1);
     v.push_back(11);
    v.push_back(3);
    v.at(2)=90;              //v.at can be used to print an index or update the value 
    v[3]=43;                // similarly v[] could also be used
    cout<<v[2]<<endl;      
     cout<<v[3]<<endl;       
     cout<<v.at(1)<<endl;

     for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
     }
    cout<<endl;
     //sort  (arranging in ascending order)
     sort(v.begin(),v.end());
     for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
     }
     




}
