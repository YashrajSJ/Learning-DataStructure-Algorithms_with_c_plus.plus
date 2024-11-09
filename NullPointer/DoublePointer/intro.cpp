#include<iostream>
using namespace std;
int main(){
    int x=5;
    int *ptr=&x;
    int **p = &ptr;
    cout<<x<<endl;
    cout<<ptr<<endl;
    cout<<p<<endl<<endl;
    cout<<x<<endl;
    cout<<*ptr<<endl;
    cout<<**p<<endl;        //double star p ka matlab p mein jo address stored hai us address mein 
                        //jo address stored hai us address mein stored value .
}