/* Destructor do not take any value and not return any value  */

#include<iostream>
using namespace std;

class Test{
     public:
     static int count;
     Test(){
          cout<<"I am Object number"<<count<<endl;
          count++;
     }
     //Defining the destructor
     ~Test(){
          cout<<"I am destroying the object number"<<--count<<endl;
     }    
     void Te(){
          cout<<"I am paras"<<endl;
     } 
};

int Test::count;//Default start from 0

int main(){
     cout<<"Entering to the main"<<endl;
     Test s;
     {            // {}- any thing inside is called inside block
          cout<<"Entering to the block"<<endl; 
          Test s1, s2;
          cout<<"The object s1, s2 created"<<endl;
          cout<<"Exiting the block"<<endl;
     }    // this } call destructor for the s1, s2 
     s.Te();
    return 0;
}  // this } call destructor for the s