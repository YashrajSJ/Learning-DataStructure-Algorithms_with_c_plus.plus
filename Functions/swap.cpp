    //method-1 (better to do method )

#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int temp=a;
    a=b;
    b=temp;
    cout<<a<<" "<<b;
}

//     //method 2 
//   #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cin>>a>>b;
//     a=a+b;
//     b=a-b;
//     a=a-b;
// }  