//Write a function to find out the first and last digit of a number
//without returning anything.

#include<iostream>
using namespace std;
void find(int n, int*f,int*l){  //these new dabbas will store n, f,l
    *f=n%10;    //last digit
    while(n>9){
        n=n/10;
    }
    *l=n;       //this will store first digit value in *m i.e. dabba of first digit as its address is 
                //stored in f dabba of int main
}
int main(){
    int n;
    cout<<"Enter the number ";
    cin>>n;
    int firstdigit,lastdigit;
    int *f=&firstdigit;
    int *l=&lastdigit;
    find(n,f,l);
    
}