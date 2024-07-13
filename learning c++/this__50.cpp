#include<iostream>
using namespace std;

class A{
    int a;
    public:
        A & setData(int a){
            this->a = a;// a = a; -> will prefer the local variable and show garbage 
            return *this;
        }
        void getData(void){
            cout<<"The value of the a is: "<<a<<endl;
        }
};

int main(){
    A s;
    s.setData(23);
    s.getData();
    return 0;
}