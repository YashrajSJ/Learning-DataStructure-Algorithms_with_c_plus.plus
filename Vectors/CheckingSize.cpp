// Function to check size and capacity of vector 

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v;
    v.push_back(7);
    cout<<v.size()<<endl;   //size function only tells how many elements are there i.e. how many 
    v.push_back(9);         // indices are filled
    cout<<v.size()<<endl;
    v.push_back(3);
    cout<<v.size()<<endl;
    v.push_back(1);
    cout<<v.size()<<endl;


    v.push_back(7);
    cout<<v.capacity()<<endl;       //capacity tells how many indices are made 
    v.push_back(9);
    cout<<v.capacity()<<endl;
    v.push_back(3);
    cout<<v.capacity()<<endl;
    v.push_back(1);
    cout<<v.capacity()<<endl;
}