#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a number ";
    int n;
    cin>>n;
    int k=1;
    for(int i=1;i<=n;i++){
           for(int j=1;j<=i;j++){
            cout<<k<<" ";
            k++;  //value of k is increased by 1 every time
           }
            
           cout<<endl;
    }

}