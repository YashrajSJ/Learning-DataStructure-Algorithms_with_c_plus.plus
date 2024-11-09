//To find factorial of a number

// //METHOD-1 

// #include<iostream>
// using namespace std;
// int fact(int n){
//     int k=1;
//     for(int i=1;i<=n;i++){
//         k=k*i;
//     }
//     return k;
// }

// int main(){
//     int n;
//     cout<<"Enter value of n ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         cout<<fact(i)<<endl;
//     }
// }

       // METHOD-2 (EFFICIENT WAY)

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of n ";
    cin>>n;
    int factorial=1;
    for(int i=1;i<=n;i++){
        factorial*=i;
        cout<<factorial<<endl;
    }
}