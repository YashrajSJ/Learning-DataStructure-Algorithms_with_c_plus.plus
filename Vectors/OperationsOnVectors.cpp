// pop_back operation

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
    cout<<v.size()<<" "<<v.capacity()<<endl;
    for(int i=0;i<v.size();i++){        
        cout<<v[i]<<" ";
    }
    cout<<endl<<endl;
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    cout<<v.size()<<" "<<v.capacity()<<endl;
    for(int i=0;i<v.size();i++){        
        cout<<v[i]<<" ";
    }


}