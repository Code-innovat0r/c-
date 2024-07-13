#include<iostream>
using namespace std;

/* 
Order of the execution of the constructor

class B : public A{
        // constructor of A execute first then B
};

class B : public A, public C{
    // constructor of A and then of C and then B 
};

class A : public B, virtual public C{
    // constructor of C execute first then B and then A
};
 */

class Base1{
   int base_value1;
   public:
    Base1(int a){
        base_value1 = a;
        cout<<"The value of the base_value1 is set successfully"<<endl;
    }
    void getdataBase1(){
        cout<<"The value of the base_value1 is: "<<base_value1<<endl;
    }
};

class Base2{
   int base_value2;
   public:
    Base2(int a){
        base_value2 = a;
        cout<<"The value of the base_value2 is set successfully"<<endl;
    }
    void getdataBase2(){
        cout<<"The value of the base_value2 is: "<<base_value2<<endl;
    }
};

class Derived : public Base1, public Base2{  //Decide the order of the constructor execution
   int derived;
   public:
    Derived(int i, int j, int k): Base2(i), Base1(j){
        derived = k;
        cout<<"The value of the derived is set successfully"<<endl;
    } 
    void getderived(){
        cout<<"The value of the derived is: "<<derived<<endl;
    }
};

int main(){
    Derived object(23, 34, 45);
    object.getdataBase1();
    object.getdataBase2();
    object.getderived();
    return 0;
}