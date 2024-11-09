#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(5);       //5 size ka array ban gaya and each element is 0
    for(int i=0;i<v.size();i++){        
        cout<<v[i]<<" ";
    }
    cout<<endl;

    vector<int> ktm(7,9);  // 7 index ka array ban gaya and har index mein 9 value daal di
    for(int i=0;i<ktm.size();i++){        
        cout<<ktm[i]<<" ";
    }
}