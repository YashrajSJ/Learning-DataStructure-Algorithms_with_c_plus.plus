//print
            //     1
            //    121
            //   12321
            //  1234321

 #include<iostream>
using namespace std;
int main(){
    cout<<"Enter a number ";
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){

       for(int j=1;j<=n-i;j++){
            cout<<" ";
       }
       for(int k=1;k<=i;k++){
          cout<<k;}
       
       for(int m=i-1;m>0;m--){
         cout<<m;
       }

          
        cout<<endl;
    }

}