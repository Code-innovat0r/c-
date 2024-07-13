#include<iostream>
#include<string>
using namespace std;

class Employee{
     public:
         int Id;
         int salary;
         string name;
         Employee(){}
         Employee(int id, int sal, string s){
            Id = id;
            salary = sal;
            name = s;
         }
          void getData(){
          cout<<"Employee Id "<<Id<<endl;
          cout<<"Employee Salary "<<salary<<endl;
          cout<<"Employee name "<<name<<endl;
         }
};

/*
1. Default visibility mode is private 
2. Private visibility mode: public member of the base class become the private memeber of the derived class
3. Public visibility mode: public member of the base class become the public memeber of the derived class
4. Private members can't be inherited
5. Base Class should have a default constructor if you are using constructors
6. Any change in the value of the parameter of the base class should be done in constructor or functions..
*/
//Programmer class inheriting Employee
class Programmer : public Employee{
     public:
     Programmer(){
        Id = 23;// rewriting the Id of the employee
     }    
};

int main(){
    Programmer f;
    cout<<f.Id<<endl; // RETURN 23
    f.getData();
    return 0;
}