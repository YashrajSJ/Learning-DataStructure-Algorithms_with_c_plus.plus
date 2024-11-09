//Print fibonacci series taking no of terms input from user
//1,1,2,3,5,8,13,21....

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number ";
    cin>>n;
    int sum=0, a=1 ,b=1;
    for(int i=1;i<=n-2;i++){        //loop till n-2 terms as sum at i=1 inside loop is
        sum=a+b;                    //already at 2 which is 3rd term 
        a=b;
        b=sum;
    }
    cout<<"The nth term of fibonacci series is "<<b;    //we wrote here b as in 1st and 2nd term
}                                                       //loop will not work and value of b is 1