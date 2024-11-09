// q1 Write a function to print squares of n natural numbers.

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         int k=i*i;
//         cout<<k<<endl;
//     }
// }

// q2 Write a function to take the radius of a circle as an argument and return its area.

#include<iostream>
using namespace std;

int area(int r){
    int a;
    a=3.14*r*r;
    return a;
}

int main(){
    int r;
    cout<<"Enter radius ";
    cin>>r;
    cout<<area(r)<<endl;
}