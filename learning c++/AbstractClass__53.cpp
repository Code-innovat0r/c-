#include<iostream>
using namespace std;

class Abstract{
    protected:
        int a= 89;
    public:
        void greet(){
            cout<<"Hello hOW ARE YOU??"<<endl;
        }
        /* Definig a pure virtual function, it must be define in the inerited class */
        virtual void welcome()=0; //also called do-nothing function
};

class Abstract_inherit : public Abstract{
    public:
        void welcome(){
            cout<<"You are heartly welcome!!!    "<<a<<endl;
        }
};

int main(){
    Abstract_inherit s;
    s.greet();
    s.welcome();
    return 0;
}