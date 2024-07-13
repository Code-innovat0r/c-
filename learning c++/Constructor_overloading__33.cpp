#include<iostream>
using namespace std;

class constructor{
     int a, b;
     public:
     /* You are able to define the number of the constructor in a class but with
     different arguments, while running the comiler try to match the arguments 
     and as per that call the constructor */
     constructor(){
          a = 0;
          b = 0;
     }
     constructor(int a1){
          a = a1;
          b = 0;
     }
     constructor(int a1, int t){ 
          a = a1;
          b = t;
     }
     void display(){
          cout<<"The valaue of the a is -> "<<a<<endl;
          cout<<"The valaue of the b is -> "<<b<<endl;
     }
};
 
int main(){
    constructor a ;
    a.display();
    cout<<endl<<endl;
    
    constructor b(23);
    b.display();
    cout<<endl<<endl;

    constructor c(2, 24);
    c.display();
    cout<<endl<<endl;
    return 0;
}