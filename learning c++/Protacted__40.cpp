/* Procatcted is much similar to the Private but whatever define in the protacted can be inherited thats the only difference */

#include<iostream>
#include<string>
using namespace std;

class Tv{
    protected:
        string a;
    private:
        string b;
    public:
        void setA();
        void setB();
        string getB();
};

void Tv :: setA(void){a = "Tv is On, Enjoy";}
void Tv :: setB(void){b = "Tv is of have some rest";}
string Tv :: getB(void){return b;}
 
class Remote : public Tv{
    public:
        Remote(){cout<<"Hey!! Let us enjoy Tv..."<<endl;}
        string getA() {return a;} // a can be inherited unlike private
};

int main(){
    Remote object;
    // object.a; // Protacted a can't be access here just like private
    object.setA(); 
    object.setB(); 
    cout<<object.getA()<<endl; 
    cout<<object.getB()<<endl;
    return 0;
}