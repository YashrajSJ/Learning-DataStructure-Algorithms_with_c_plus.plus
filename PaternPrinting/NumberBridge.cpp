 #include<iostream>
using namespace std;
int main(){
    cout<<"Enter a number ";
    int n;
    cin>>n;
    int letter=n-1;                      
    int nsp=1;
    for(int m=1;m<=2*n-1;m++){
        cout<<m;
    }
    cout<<endl;
    for(int k=1;k<=n-1;k++)
   { 
    int a=1;
    
    for(int p=1;p<=letter;p++){
    cout<<a;
    a++;
    }
    
     for(int j=1;j<=nsp;j++){
    cout<<" ";
    }
    a=a+nsp;        //for increasing letter count in spaces
    nsp=nsp+2;

    for(int i=1;i<=letter;i++){
    cout<<a;
    a++;
    }
    letter--;
     cout<<endl;}
}