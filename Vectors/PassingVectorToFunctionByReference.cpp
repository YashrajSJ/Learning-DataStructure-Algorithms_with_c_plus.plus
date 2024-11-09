 //Passing Vector To Function By Reference 

#include<iostream>
#include<vector>
using namespace std;
void change(vector <int> &a){    // now a is not a new array , it has address of v array
    a[0]=100;         //a-> 100 9 3 1 
     for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
     }
    cout<<endl;
}
int main(){
    vector <int> v;
    v.push_back(7);
    v.push_back(9);
    v.push_back(3);
    v.push_back(1);
     for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
     }
    cout<<endl;
   change(v);
    for(int i=0;i<v.size();i++){        // vector v changes as vector in this case is passed by reference
        cout<<v[i]<<" ";
     }
    cout<<endl;

}