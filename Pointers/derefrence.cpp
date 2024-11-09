#include<iostream>
using namespace std;
int main(){
    int x=3;
    int *p=&x;
    cout<<*p;   //it will print value which is in the address which is stored in p
    cout<<endl;
    *p=6;       //*p mein stored address pe jao aur usme value ko update kar do
    cout<<x;    
}