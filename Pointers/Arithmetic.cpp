#include<iostream>
using namespace std;
int main(){
    int x=8;
    int *p=&x;
    cout<<*p<<endl;
    cout<<p<<endl;
    (*p)++;
    cout<<*p<<endl;
   
    p=p+1;
    cout<<p<<endl;
    
    cout<<*p<<endl;     //random value comes it does not print 9 as in above p=p+1 we 
                        //changed the address of p so new p does not have 9
                        //9 is stored in previous address dabba p
    cout<<"Now of bool "<<endl;

    bool flag=true;
    bool *k= &flag;
    cout<<k<<endl;
    k=k+1;
    cout<<k;

}