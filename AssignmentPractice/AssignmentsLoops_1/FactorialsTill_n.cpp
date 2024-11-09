//Print the factorials of first ‘n’ numbers

#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a number ";
    int n;
    cin>>n;
    int sum=1;
    for(int i=1;i<=n;i++){
        sum=sum*i;
        cout<<sum<<endl;
    }

}