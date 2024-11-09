//Permutation and combination

//     //METHOD -1 

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter value of n ";
//     cin>>n;
//     int r;
//     cout<<"Enter value of r ";
//     cin>>r;
//     int nfactorial=1;
//     for(int i=1;i<=n;i++){      //int i was declared inside for loop so valid only for inside 
//         nfactorial=nfactorial*i;    //nfactorial was declared outside loop
//     }
//     int rfactorial=1;
//     for(int i=1;i<=r;i++){      //this int i will be a different dabba as previous int i ended in that loop
//         rfactorial=rfactorial*i;
//     }
//     int n_rfactorial=1;     //n_rfactorial -> (n-r)!
//     for(int i=1;i<=(n-r);i++){
//         n_rfactorial=n_rfactorial*i;
//     }
//     int combination=nfactorial/(rfactorial*n_rfactorial);
//     cout<<"The combination is "<<combination;

//     //can name variable as fact instead of factorial

// }

#include<iostream>
using namespace std;
int fact(int x){
    int k=1;
    for(int i=1;i<=x;i++){
        k=k*i;
    }
    return k;
}
int combination(int n , int r){
    int a;
    a=fact(n)/(fact(r)*fact(n-r));  //fact funnction ko call lagai
    return a;
}

int main(){
    int n;
    cout<<"Enter value of n ";
    cin>>n;
    int r;
    cout<<"Enter value of r ";
    cin>>r;
    // int nfactorial=fact(n);
    // int rfactorial=fact(r);
    // int n_rfactorial=fact(n-r);
    // int combination=nfactorial/(rfactorial*n_rfactorial);
    // cout<<"The combination is "<<combination;
    int ncr=combination(n,r);
     cout<<"The combination is "<<ncr;

     cin>>n>>r;
     cout<<ncr;



}