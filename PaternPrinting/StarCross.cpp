////Print pattern -> a star cross

#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a number ";
    int n;
    cin>>n;
    
    for(int i=1;i<=n;i++){
           for(int j=1;j<=n;j++){
            if(j==i || j+i==n+1) cout<<"*";   
            else{ cout<<" ";}                      
           }
           cout<<endl;
    }

}