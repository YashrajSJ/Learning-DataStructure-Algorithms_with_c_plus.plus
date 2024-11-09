//Storing address of array in pointer

#include<iostream>
using namespace std;
int main(){
    int arr []={1,4,6,3};
    int *ptr=arr;       //arr already is address of 1st index of array

    int *ctr=&arr[0];      
                             //Wrong methods (Mentioned below in green)
                            //int *ptr=&arr;  
                            // int *ptr= arr[0]; (arr[0] is a value )

    cout<<ptr<<endl<<ctr<<endl;   //address of 1st element of array is stored
    cout<<ptr[0]<<endl<<ptr[2]<<endl;
    ptr[0] = 43;        //we can update array using pointer in this way without *
    cout<<ptr[0]<<endl;

    for(int i=0;i<=3;i++){
        cout<<*ptr<<" ";
        ptr++;              //ptr stores address of 0th index of array initially
                        // now ptr++ means increases by 4 bytes so now points to 1st index
    }
        // at the end of loop address stored in ptr is not of any element (as after last element)
            //  ptr address moves 4 bytes
            // so we again store arr adress in ptr to use it further
    ptr =arr;   
}