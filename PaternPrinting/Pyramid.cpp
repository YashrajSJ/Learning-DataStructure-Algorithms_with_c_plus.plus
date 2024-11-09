    //Print pattern -> a pyramid

      //METHOD -1 
      
//         #include<iostream>
// using namespace std;
// int main(){
//     cout<<"Enter a number ";
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//        for(int j=1;j<=n-i;j++){
//             cout<<" ";
//        }
//        for(int k=1;k<=(2*i-1);k++){
//           cout<<"*";}
          
//         cout<<endl;
//     }

// }

        //Method -2     using nst=no. of stars & nsp= no. of spaces
        #include<iostream>
using namespace std;
int main(){
    cout<<"Enter a number ";
    int n;              //First make the asked figure in paper and make observation valid for any value of n
    cin>>n;
    int nst=1;      //from observation nst is 1 in 1st line and increases by 2 in every next line
    int nsp=n-1;    //from observation nsp is n-1 in 1st line (for any piramid of any value of n) and decreases by 1 in every next line  
    for(int i=1;i<=n;i++){
       for(int j=1;j<=nsp;j++){
            cout<<" ";
       }
       nsp--;       //to reduce nsp by 1 in next line
       for(int k=1;k<=nst;k++){
          cout<<"*";}
          nst=nst+2;
          
        cout<<endl;
    }

}