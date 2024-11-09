// Print ap 1,3,5,7 till n terms 

#include<iostream>
using namespace std;
int main(){
        //METHOD 1 
    cout<<"Enter the value of n ";
    int n;
    cin>>n;
    // for(int i=1;i<=n;i++){
    //     cout<<2*i-1<<" ";
    // }


            //METHOD - 2
    // we want to print the ap
    int a=1;            //first term is 1
    for(int i=1;i<=n;i++){
        cout<<a<<endl;
        a=a+2;              //next term is 1st + common difference 
    }

}