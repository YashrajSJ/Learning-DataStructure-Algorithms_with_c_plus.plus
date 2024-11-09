#include<iostream>
using namespace std;
int main(){
    int arr[]={32,4,3,6,57,5,75,73,35,63,75};
    int size=sizeof(arr)/sizeof(arr[0]);   //it will print how many numbers are storedin array
                                        //as it is an interger type so each dabba has 4 bytes size
    cout<<size;
}