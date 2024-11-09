//address of variables & concept of global and local variables

#include<iostream>
using namespace std;
int z=5;        //this is a global variable can be accessed by all functions


void fun(int x, int y){     //these x,y are formal parameters
    cout<<"Adress of void x "<<&x<<endl;
    cout<<"Adress of void y "<<&y<<endl;
}

int main(){
    int x=3;        //local variable can be accessed by only main function
    int y=8;
    cout<<"Adress of main x "<<&x<<endl;
    cout<<"Adress of main y "<<&y<<endl;
    fun(x,y);       //this x,y are actual parameters

}