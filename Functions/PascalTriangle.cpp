//Print pascal triangle (pascal triangle written in copy also in pw notes lecture 9)

#include<iostream>
using namespace std;

int fact(int x){
    int a=1;
    for(int k=1;k<=x;k++){
        a=a*k;
    }
    return a;
}

int combination(int i,int j){
    int ncr=fact(i)/(fact(j)*fact(i-j));
    return ncr;
}

int main (){
    int n;
    cout<<"Enter value of n ";
    cin>>n;
    for(int i=0;i<=n;i++){      //first make dacha of triangle which will serve as iCj
        for(int j=0;j<=i;j++){
            cout<<combination(i,j)<<" "; 
        }
        cout<<endl;
    }
}