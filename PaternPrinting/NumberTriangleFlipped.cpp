//Print pattern -> a number triangle flipped

#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a number ";
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        // spaces
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        //stars
        for(int k=1;k<=i;k++){
            cout<<k;
        }
        cout<<endl;
    }
}