#include<iostream>
using namespace std;

class compute;

class compile{
     int a, b;
     public:
        void setDate(int x , int y){
             a = x;
             b = y;
        }
        void print(){
          cout<<"The value of the a and b is "<<a<<", "<<b<<" respectively"<<endl;
        }
        friend compute;
};

class compute{
     public:
     void sum(compile o1);
};

void compute :: sum(compile o1){
          cout<<"The sum of the a and b is "<<o1.a+o1.b<<endl;
}

int main(){
    compile o1;
    o1.setDate(12, 23);
    compute e;
    e.sum(o1);
    return 0;
}