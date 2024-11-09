#include<iostream>
using namespace std;
int sum(int x, int y){
    return x+y;
}

int mini(int k, int l){     //making int dabba of k,l of mini function (it is different dabba from main function)
    int a;
    if(k>l) a=l;
    else a =k;
    cout<<"The minimum value is ";
    return a;
}
// main function niche rakhna hai dusre function upar
int main(){
     cout<<sum (40,63)<<endl;
     cout<<"Enter values of k & l  ";
     int k,l;           //making int dabba of k,l of main function
     cin>>k>>l;
     cout<<mini(k,l);

}
