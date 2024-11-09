////Print pattern -> a star plus pattern

#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a number ";
    int n;
    cin>>n;
    
    for(int i=1;i<=n;i++){
           for(int j=1;j<=n;j++){
            if(i==n/2+1 || j==n/2+1) cout<<"*";     //if n=5 n/2=2(as int datatype)
            else{ cout<<" ";}                       // and n/2+1=3
           }
           cout<<endl;
    }

}
