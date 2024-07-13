#include<iostream>
using namespace std;

template <class T1 = int ,typename T2 = float , typename T3 = bool >
class Paras{
   T1 a;
   T2 b;
   T3 c;
   public:
    Paras(T1 e, T2 f, T3 g): a(e), b(f), c(g){}
    void display(void){
        cout<<"The value of the a is: "<<a<<endl;
        cout<<"The value of the b is: "<<b<<endl;
        cout<<"The value of the c is: "<<c<<endl;
    }
};
int main(){
    // Using the default datatypes of the template.... 
    Paras<> object(12, 34.54, false);
    object.display();

    cout<<endl<<endl;

    //Giving datatype of to the T1
    Paras<char> object1('P', 64.64, false);
    object1.display();

    cout<<endl<<endl;

    //Giving datatype
    Paras<char, float, double> object2('P', 23.234, 13245.5645);
    object2.display();

    return 0;
}