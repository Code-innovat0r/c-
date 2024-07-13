#include<iostream>
using namespace std;

class c2;

class c1{
   int num1;
   public:
   void setData(int value){
     num1 = value;
   }
   double display(){
     cout<<"The original value of the num1 is -> "<<num1<<endl;
   }
   friend void interchange(c1 &, c2 &); // take the reference of the c1 & c2 
};

class c2{
   int num2;
   public:
   void setData(int value){
     num2 = value;
   }
   double display(){
     cout<<"The original value of the num2 is -> "<<num2<<endl;
   }
   friend void interchange(c1 &, c2 &); // take the reference of the c1 & c2  
};

void interchange(c1 & obj1, c2 & obj2){
     int a;
     a = obj2.num2;
     obj2.num2 = obj1.num1;
     obj1.num1 = a;
}     

int main(){
    c1 object1;
    c2 object2;
    object1.setData(12);
    object1.display();
    object2.setData(15);
    object2.display();
    interchange(object1, object2);
    cout<<endl<<endl;
    cout<<"The value on the reversing is ->  "<<endl;
    object1.display();    
    object2.display();    

    return 0;
}