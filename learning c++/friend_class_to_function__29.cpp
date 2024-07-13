#include<iostream>
using namespace std;

class y;

class x{
     int data;
     public:
       void setdata(int value){
       data = value;
       }
     friend void addData(x, y);
};

class y{
     int data;
     public:
       void setdata(int value){
          data = value;
       }
     friend void addData(x, y);
};

void addData(x o1, y o2){
     cout<<"The sum of data of the x and y is -> "<< o1.data + o2.data <<endl;
}

int main(){
    x k;
    y u;
    k.setdata(12);
    u.setdata(13);
    addData(k, u);
    return 0;
}