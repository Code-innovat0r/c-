/* Syntax for the multiple inheritance
class C : visibility-mode A, visibility-mode B{ CODE BODY }; */

#include<iostream>
using namespace std;

class Base_class_1{
    int Base1;
    public:
        void setBase1(int q){
            Base1 = q;
        }
        void getBase1(){
            cout<<"The value of the Base 1 is: "<< Base1<<endl;
        }
};

class Base_class_2{
   int Base2;
   public:
       void setBase2(int w){
        Base2 = w;
       }
       void getBase2(){
        cout<<"The value of the Base 2 is: "<<Base2<<endl;
       }
};

class Multiple_inherited_class : public Base_class_1, public Base_class_2{
     int Base3;
   public:
        Multiple_inherited_class(){
            cout<<"You are viewing the Multiple inheritance -> "<<endl;
            cout<<endl<<endl;
        }
       void setBase3(int w){
        Base3 = w;
       }
       void getBase3(){
        cout<<"The value of the Base 3 is: "<<Base3<<endl;
       }

};

int main(){
    Multiple_inherited_class object;
    object.setBase1(23);
    object.setBase2(34);
    object.setBase3(45);
    object.getBase1();
    cout<<endl;
    object.getBase2();
    cout<<endl;
    object.getBase3();
    return 0;
}