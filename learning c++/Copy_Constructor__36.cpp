/* If you want to make a new object just similar to the previous object you use copy constructor. Copy constructor take the reference of the older constructor as the argument */
/* If you don't have the defined copy constructor the conpiler in itself pusses the copy constructor if found the object reference as the argument */

/* A constructor that do nothing is necessary to define if you are using the following way of the object declaration and used constructor */

#include <iostream>
using namespace std;

class CopyConstructor
{
     int num = 30;

public:
     CopyConstructor() {} // constructor that do nothing
     CopyConstructor(int a)
     {
          cout << "I am a copy constroctor" << endl;
          num = a;
     }
     void display()
     {
          cout << "The value of the num is " << num << endl;
     }
};

int main()
{
     CopyConstructor c1, c2, c3; // It need a default constructor
     c1 = CopyConstructor();
     c1.display();
     cout << endl;
     c2 = CopyConstructor(34);
     c2.display();
     cout << endl;
     // Using the copy constructor for the object c3 that take reference of c2
     c3 = CopyConstructor(c2); // using the default constructor of the compiler till you didn't uncomment the copyconstructor of class
     c3.display();


     // c4 and c5 must not be a pre-define object
     CopyConstructor c4 = c2; // invoke copy constructor
     c4.display();
     CopyConstructor c5(c2);  // invoke copy constructor
     c5.display();
     c2 = c3;                 // is using assignment operator will not invoke copy constructor
     c3.display();

     return 0;
}