//Print 0 1 binary triangle 

        //METHOD - 1 
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a number ";
    int n;
    cin>>n;
    int a =1;
    for(int i=1;i<=n;i++){ 
            if(i%2!=0) a=0;     //row no. odd
            else a=1;           //row no. even
           for(int j=1;j<=i;j++){
                cout<<a;
                //flipping
                if(a==0) a=1;       //to do alternate
                else a=0;
           }
           cout<<endl;
    }

}