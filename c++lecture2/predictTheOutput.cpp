#include<iostream>
using namespace std;
int main (){
    bool p= false ;
    bool q= false ;
    bool r= true;
    cout<<(p==q==r);  // first acc to heirarchy it will se p==q which is true so 1 will be 
                     // answer then 1==r which is true as r = true i.e. r= 1
                    //hence answer is 1
}                    //i.e. (p==q)==r heirarchy