#include<iostream>
using namespace std;
int main(){
    int arr[7]; // 7 places created 0,1,2,3,4,5,6
    arr[0]=5;
    cout<<arr[0]<<endl;
    int c[9] = {0,4,7,32,63,73,865,24,23};    //9 places created in c array  and these values goes in those dabbas
    cout<<c[4]<<endl;
    cout<<c[0];
    
    int arr2[] ={5,23,434,65,34,21,56,78,9};      //can give values without writting how many boxes to make
    for(int i=0;i<=8;i++){
        cout<< arr2[i]<<" ";
    }
}