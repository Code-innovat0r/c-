#include<iostream>
using namespace std;


/* Friend function is similar to definning the function isntance in the class and 
definning the function out of the class, but in this case you can only access the 
private variable of the class but with object.call_function is not allowed,
you can call the function simply, function_name(); */
class complex{
     int a,b;
     public:
        void SetNumber(int num1 , int num2){
            a = num1;
            b = num2;
        }
        void PrintComplex(){
          cout<<"The complex number is "<<a<< " +i"<<b<<endl;
        }
        // Defining the friend->Allow you to use the private variables of complex
        friend complex Sumcomplex(complex o1, complex o2);

};

// Defining the friend function
complex Sumcomplex(complex o1, complex o2){
     complex o3;
     o3.SetNumber((o1.a+o2.a), (o1.b + o2.b));
     o3.PrintComplex();
}

int main(){
    complex o4, o5;
    o4.SetNumber(3, 5);
    o4.PrintComplex();
    cout<<endl<<endl;
    o5.SetNumber(4, 6);
    o5.PrintComplex();
    cout<<endl<<endl;
    // object.Sumcomplex(o4, o5); --> will throws an error 
    Sumcomplex(o4, o5);

    return 0;
}