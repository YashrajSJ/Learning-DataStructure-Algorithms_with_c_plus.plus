// Take input percentage of a student and
// print the Grade according to marks:


        // METHOD 1
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

        //METHOD - 2

        #include <iostream>
        using namespace std;
        int main(){
            cout<<"Enter a number ";
            int n;
            cin>>n;
            if(n>=90) cout<<"Excellent";     //A single line of else can also be written without brackets.
            else if (n>=80)
               cout<<"Very Good";    
            else if(n>=70)
                cout<<"Good";
               else if(n>=60)
                  cout<<"Need Improvement ";         
             
            
        }

        
