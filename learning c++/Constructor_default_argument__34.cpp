#include<iostream>
using namespace std;

class DefaultConstructor{
     int data1, data2;
     public:
        DefaultConstructor(int d1, int d2 = 4){
            data1 = d1;    
            data2 = d2;    
        }
        void print(); 
};

void DefaultConstructor :: print(){
     cout<<"The value of the data1 and data2 is "<<data1 <<" and "<<data2<<" respectively"<<endl;
} 

int main(){
    DefaultConstructor s(6); 
    s.print();
    cout<<endl;
    DefaultConstructor g(3, 5);
    g.print();
    return 0;
}