
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a number ";
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){          //for any- row no.+ no.of star =n+1(where n is total no of rows )

    // no of stars= n+1-i

        for(int j=1;j<=n+1-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

}