//Ques : Find the doublet in the Array whose sum is equal to the given value x. (Leetcode -1)
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int x;
    cout<<"Enter target ";
    cin>>x;
    vector <int> v;
    int n;
    cout<<"Enter array size ";
    cin>>n;

    cout<<"Enter array elements ";
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        v.push_back(m);
    }
    for(int i=0;i<=(n-2);i++){
        for(int j=i+1;j<=n-1;j++){
            if(v[i]+v[j]==x){
                cout<<"("<<i<<","<<j<<")"<<endl;
            }
        }
    }

}
