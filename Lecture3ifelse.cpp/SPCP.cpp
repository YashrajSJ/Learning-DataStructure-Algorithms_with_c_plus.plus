#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the cost price : ";
    int cp;
    cin>>cp;
    cout<<"Enter the selling price : ";
    int sp;
    cin>>sp;
    if(sp>cp){
        cout<<"Profit has occured."<<endl<< "The profit amount is : "<<sp-cp;
    }
    if(cp>sp){
        cout<<"Loss has occured."<<endl<<" The loss amount is : "<<cp-sp;
    }
    if(cp==sp){
        cout<<"no profit no loss";
    }
}