#include<iostream>
using namespace std;

/* Creating a class Employee */
class Employee{
      private: int a , b, c;  //the variable a , b, c are private variable
      public: int e, f, g;   //The variable e, f, g are public variable
      void Setdata(int a, int b, int c);     
      void Getdata(){
          cout<<"The value of the a is "<<a<<endl;  
          cout<<"The value of the b is "<<b<<endl;  
          cout<<"The value of the c is "<<c<<endl;  
          cout<<"The value of the e is "<<e<<endl;  
          cout<<"The value of the f is "<<f<<endl;  
          cout<<"The value of the g is "<<g<<endl;  
      }        
};
void Employee :: Setdata(int a1, int a2, int a3){  // Defining the function for the function prototype
              a = a1;
              b = a2;
              c = a3;
}

int main(){
    Employee Paras; //Creating 'Paras' object for the Employee class
    Paras.e = 4;
    Paras.f = 5;
    Paras.g = 6;
    Paras.Setdata(1, 2, 3);
    Paras.Getdata();
    cout<<endl<<endl;
    // Paras.a = 23; // Can't access here because datatype is private  
    Paras.e = 25;  // can be done as the datatype is public
    Paras.Getdata();
    return 0; 
}




/* Declaration of object with the class just like the Typedefed in structure */
//class Employee{
// /* code */
// } paras, avrit;
/* paras, avrit are two Object for the class Employee class */