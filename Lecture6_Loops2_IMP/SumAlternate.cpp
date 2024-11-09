//Print the sum of this series :
//1 - 2 + 3 - 4 + 5 - 6… upto ‘n’.

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number ";
//     cin>>n;
//     int Sum=0;
//     for(int i=1;i<=n;i++){
//         if(i%2!=0){
//             Sum=Sum+i;
//         }
//         else Sum= Sum-i;
//     }
//     cout<<Sum;
// }

        //METHOD - 2
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number ";
    cin>>n;
    if(n%2==0) cout<<n/2*(-1);
    else{cout<<(n-1)/2*(-1)+n;}
}