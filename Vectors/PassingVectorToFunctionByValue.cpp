 //Passing Vector To Function By value 

#include<iostream>
#include<vector>
using namespace std;
void change(vector <int> a){    // a new array a is created which got values of array v
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
    for(int i=0;i<v.size();i++){        // vector v remains same as vector in this case is passed by value
        cout<<v[i]<<" ";
     }
    cout<<endl;

}