#include<iostream>
using namespace std;

void display(int k[],int size){        //instead of k[] we could also write int *k as int k[] is an address  
    for(int i=0;i<=(size-1);i++){      //if we don't know how many elements are in array so size gives the no.of elements
        cout<<k[i]<<" ";                
    }
    cout<<endl;
    return;
    }

void change(int b[]){   //int b[] is technically a address i.e. a pointer
    b[0]=100;
    return;
}

int main(){
    
    int arr[]={1,4,3,5,7};
    int size= sizeof(arr)/sizeof(arr[0]);
    //QUESTION->  accessing the elements of array when passing in another function
    // i.e. in another function is it pass by value OR pass by reference

    display(arr,size);   //calling function
    change(arr);
    display(arr,size);
    cout<<endl;
    cout<<arr[0];       //this is because array has passed reference so value is updated in all
}
//hence passing array is passing by reference not by passing values