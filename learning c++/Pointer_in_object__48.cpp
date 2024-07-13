#include<iostream>
using namespace std;

class complex{
    int real, imaginary;
    public:
        complex(int, int);
        void getData();
};

complex :: complex(int x, int y): real(x), imaginary(y){}
void complex :: getData(void){
    cout<<"The real part is "<<real<<endl;
    cout<<"The imaginary part is "<<imaginary<<endl;
}

int main(){
    complex c1(23, 34);
    c1.getData();

    ////////////////////////////////
    complex *c2 = &c1;
    (*c2).getData();

    /////////////////////////////////
    complex *c3 = new complex(15, 23);  // create new object for the complex
    
    (*c3).getData(); // OR
    c3->getData();  // using the arrow operator


    /* Creating the array of the object 
     don't know how to pass the argument for the constructor */
    // complex *c4 = new complex[3];
    // (*c4).getData();
    // (*(c4+1)).getData();
    // (*(c4+2)).getData();


    return 0;
}