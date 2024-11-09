////Print pattern -> a star bridge

 #include<iostream>
using namespace std;
int main(){
    cout<<"Enter a number ";
    int n;
    cin>>n;
    int nst=n-1;                      
    int nsp=1;
    for(int m=1;m<=2*n-1;m++){
        cout<<"*";
    }
    cout<<endl;
    for(int k=1;k<=n-1;k++)
   { for(int i=1;i<=nst;i++){
    cout<<"*";
    }
    
    for(int j=1;j<=nsp;j++){
    cout<<" ";
    }
    nsp=nsp+2;

    for(int i=1;i<=nst;i++){
    cout<<"*";
    }
    nst--;

    cout<<endl;}
}