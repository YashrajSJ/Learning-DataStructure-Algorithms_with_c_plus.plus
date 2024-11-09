#include <iostream>
using namespace std;
int main(){
    cout<<"Enter a number ";
    int n;
    cin>>n;

    for(int i=1;i<=(2*n-1);i++){
        for(int j=1;j<=(2*n-1);j++){
           int a=i;
           int b=j;
           if(i>n) a=2*n-i;
           if(j>n) b=2*n-j;
           int x=min(a,b);      //first print cout<<x; see the spiral
                                //then print cout<<n-x+1 spiral
           cout<<n-x+1;         //to convert 1->4  2->3  3->2  4->1
           }
           cout<<endl;
    }
   
}
