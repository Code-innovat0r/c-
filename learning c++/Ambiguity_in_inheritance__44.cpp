/* Suppose You have created a derived class by inheriting 2 different class, and both the class have a function of the same name now you call the function of that name with the object of the derived class then which of the function should be run, it will be an ambiguity error.

2. Suppose you have inherited a class B from class A , and class A  have a function, if you redefine the function in the class B with the same name and argument then with the object of the B the redefined function of the B will execute instead of the function of A */



#include<iostream>
using namespace std;

class Base1{
   public:
      void greet(){
        cout<<"Hello How are you???"<<endl;
      }
};

class Base2{
   public:
      void greet(){
        cout<<"Hello kaisa Ho Bhai?"<<endl;
      }
};

class Derived : public Base1, public Base2{
   public:
   /* So with the object of the Derived class if I want to call the function of the Base 1 class then */
   void greet(){   Base1 :: greet(); }
};

int main(){
    Derived object;
    // object.greet();  //request for member 'greet' is ambiguous, without scope 
    object.greet(); // Execute the greet of the Base 1 class

    return 0;
}