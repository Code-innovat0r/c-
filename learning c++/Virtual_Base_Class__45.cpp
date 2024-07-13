#include<iostream>
using namespace std;

class Base1{
   public:
      void greet(){
        cout<<"Hello How are you???"<<endl;
      }
};

class B1 : virtual public Base1{
   public:
   int welcome1(int a){
    cout<<"Welcome "<< a<<endl;
    return 0;
   }
};

class B2 : virtual public Base1 {
   public:
   void welcome(){
    cout<<"Welcome B2"<<endl;
   }
};

class Derived : public B1, public B2{
    public:
};

class Derived_B1 : public B2{
    public:
};

int main(){
    Derived object;
    object.greet();
    // object.welcomeB1();
    object.welcome();

    B1 obj1;
    obj1.greet();
     
    B2 obj2;
    obj2.greet();

    Derived_B1 obj3;
    obj3.greet();
    return 0;
}