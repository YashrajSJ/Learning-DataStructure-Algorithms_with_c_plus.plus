#include<iostream>
using namespace std;
int main(){
    int arr[4];
    cout<<&arr[0]<<endl;        //printing address of a particular khacha of array
    cout<<&arr[1]<<endl; 
    cout<<&arr[2]<<endl; 
    cout<<&arr[3]<<endl; 
    //this shows memory is allocated together (4bytes each) they are not random with random space between them
    //they are together stored in memory
    //always integer takes 4 bytes but its address is the first byte address(every bite has different address)
}