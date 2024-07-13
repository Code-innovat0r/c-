#include<iostream>
using namespace std;

class bird{
    public:
        virtual void display(){
            cout<<"This is display in bird class."<<endl<<endl;
        }
        void print(){
            cout<<"This is show in bird class."<<endl<<endl;
        }
};

class parrot : public bird{
    public:
        void display(){
            cout<<"This is display in parrot class."<<endl<<endl;
        }
        void print(){
            cout<<"This is show in parrot class."<<endl<<endl;
        }
};

int main(){
    bird* brd;
    parrot p;
    brd = &p;
    //return the non virtual display 
    brd -> display(); //return the display of bird if no such function found in the derived class
    //return the print of the class whose object originally it is
    brd->print();

    
    return 0;
}