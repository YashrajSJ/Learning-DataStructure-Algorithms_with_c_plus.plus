// Print the factorial of a given number ‘n’. 

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number ";
    cin>>n;
    int product=1;
    
    for(int i=1;i<=n;i++){
        product=product*i;
    }
    if(n==0) cout<<1;               //Even without writting this ans will be 1 as in product already
                                // 1 is stored
    else cout<<"factorial is "<<product;
}
