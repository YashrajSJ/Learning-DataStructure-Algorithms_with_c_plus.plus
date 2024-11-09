 //print diamond
 
 #include<iostream>
using namespace std;
int main(){
    cout<<"Enter a number ";
    int n;
    cin>>n;
    int nst=1;
    int nsp=n-1;
    for(int i=1;i<=(2*n-1);i++){
        //spaces
       for(int j=1;j<=nsp;j++){
            cout<<" ";
       }                        //do dry run to get better understanding
       if(i<=n-1) nsp--;       //nsp-- is till n-1 as if n=4 then till 3rd line mein valid toh 
       else nsp++;          //4th line mein 0 ho jaega phir jab 4th line chalege aur spaces print ho jaege
       //stars              // tab else vali condition chalege aur next line ke liye 1 space print ho jaege
       for(int k=1;k<=nst;k++){     //next line mein kitne spaces dene hai ye ek previous line mein decide ho jate hain
          cout<<"*";}
          if(i<=n-1) nst=nst+2;
          else nst-=2;
          
        cout<<endl;
    }

}