//Take input percentage of a student and
//print the Grade according to marks:

            //METHOD 1 
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter marks : ";
    int n;                               
    cin>>n;
    if(n>91){
        cout<<"Excellent";
    }
    if(n>81 && n<90){
        cout<<"Very good";}
    if(n>71  && n<80){
        cout<<"Good";
    }
    if(n>61 && n<70){
        cout<<"Nice";
    }                           //Similarly do rest other
}

        // METHOD 2 
        #include<iostream>
        using namespace std;
        int main(){
            cout<<" Enter the marks ";
            int n;
            cin>>n;
            if(n>91){
               cout<<"Excellent"; 
            }
            else{
                if(n>81){
                     cout<<"Very good";
                }
                else{
                    if(n>71){
                      cout<<"Good";  
                    }
                    else{
                        if(n>61){
                            cout<<"Need improvement";
                        }
                    }
                }
            }
        }

        
