#include<iostream>
using namespace std;

void swap(int *x,int *y){     //int *x=&a  int *y=&b
    int temp= *x;       //pehle x ke dabbe pe jao phir x mein jo address stored hai use address 
                        //ke dabbe mein jo value hai vo temp naam ke dabbe mein daal do
    *x=*y;
    *y=temp;
    return ;
}

int main(){
    int a=6,b=9;
    cout<<"Enter the numbers ";
    cin>>a>>b;
    swap(&a, &b);
    cout<<a<<" "<<b;
}