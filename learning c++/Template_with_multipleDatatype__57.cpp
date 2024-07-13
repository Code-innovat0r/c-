#include<iostream>
using namespace std;

template <class T1, class T2>
class Datas{
    T1 data1;
    T2 data2;
    public: 
        Datas(T1 a, T2 b): data1(a), data2(b){}
        void display(){
            cout<<"The value of the data 1 is: "<<data1<<endl;
            cout<<"The value of the data 2 is: "<<data2<<endl;
        }
};


int main(){
   Datas<int, float> obj(23, 90.89);
   obj.display();

   cout<<endl<<endl;

   Datas<char, bool> obj1('D', true);
   obj1.display();
   return 0;
}