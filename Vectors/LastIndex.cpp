//Ques : Find the last occurrence (index) of x in the array. here x=3 

//i.e. find which is the last index in vector that contain 3 as value

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v;
    v.push_back(7);
    v.push_back(9);
    v.push_back(3);
    v.push_back(1);
    v.push_back(7);
    v.push_back(9);
    v.push_back(3);
    v.push_back(1);
    v.push_back(7);
    v.push_back(9);
    v.push_back(3);
    v.push_back(1);

    int x=3;
    int idx=-1;  // container which will store the last index containing 3.

    for(int i=(v.size()-1);i>=0;i=i--){      //v.size()-1 it is the last index
        if(v[i]==x){
            idx=i;              // peeche se vector mein dudhundo time kam lagega
            break;
        }
        
    }
    cout<<idx;
}