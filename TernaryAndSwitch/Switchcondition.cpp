// Number of days in monnts of year

#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the number of month : ";
    int x;
    cin>>x;
    switch ((x<=7 && x%2!=0) || x==8 || x==10 || x==12)   {         //1 3 5 7 8 10 12 ->31 days
        case 1 :
        cout<<"No of days are 31";                              // 4 6 9 11 
    }
    switch (x==4 || x==6 || x==9 || x==11)
    {
    case 1 :
    cout<<"No of days are 30";
    
    }
    switch(x==2){
        case 1 :
        cout<<"No of days are 28";
    }
}
