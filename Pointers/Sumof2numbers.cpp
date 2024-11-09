#include<iostream>
using namespace std;
int main(){
    int y=5;
    int x=7;
    int *k=&y;
    int *p=&x;
    cout<<*p+*k<<endl;

    int z,m;
    int *a=&z;
    int *b =&m;
    cin>>*a>>*b;
    cout<<*a+*b;
}