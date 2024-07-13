#include<iostream>
using namespace std;

class complex{
     int a, b;
     public:
     /* Constructor are the special member of the class that is use to perform the 
     basic initial programme while callig the class. It have the same name as the 
     class and it automatically invoked while initializing the class object */
     // Creating a constructor
     complex(int a1, int t){
          cout<<"Hello Paras"<<endl;
          a = a1;
          b = t;
     }
     void display(){
          cout<<"The valaue of the a is -> "<<a<<endl;
          cout<<"The valaue of the b is -> "<<b<<endl;
     }
};
 
int main(){
    complex s(4, 7);
    s.display();
    return 0;
}