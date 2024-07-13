// Wec are not using any kind of constructor so no need of the default constructor

#include <iostream>
using namespace std;

class Base
{
    int data1;

public:
    int data2;
    void Setdata();
    int getData1();
};

void Base ::Setdata(void)
{
    data1 = 10;
    data2 = 20;
}

int Base ::getData1(void)
{
    return data1;
}

class Derived : public Base // Inheriting the class
{
    int data3;

public:
    void setdata3();
    void display();
};
 
void Derived :: setdata3(void){
    data3 = data2 * getData1();  // data1 is private in Base class can't inherited
}
void Derived :: display(void){
    cout<<"The value of the data1 is "<<getData1()<<endl;
    cout<<"The value of the data2 is "<<data2<<endl;
    cout<<"The value of the data3 is "<<data3<<endl;
}


int main()
{
    Derived object;
    object.Setdata();
    object.setdata3();
    object.getData1();
    object.data2;
    // object.data3; // can't access private of the Derived class
    object.display();
    return 0;
}