//         //METHOD - 1     //METHOD 1 IS BETTER.....
// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"Enter a number ";
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         // spaces
//         for(int j=1;j<=n-i;j++){
//             cout<<" ";
//         }
//         //stars
//         for(int k=1;k<=i;k++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }

// }

        //METHOD - 2
        #include<iostream>
using namespace std;
int main(){
    cout<<"Enter a number ";
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){

            if(i+j>=n+1) cout<<"*";
            
            else cout<<" ";
        }
        cout<<endl;
    }

}