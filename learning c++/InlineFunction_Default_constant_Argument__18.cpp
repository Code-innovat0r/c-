#include<iostream>
using namespace std;

/* Creating a Inline Function
It is Use for the very simple functions So that while compiling the call of the function is replaced by function itself, in order to save run time */
inline int Product(int a, int b){
       return a*b;
}

/* Creating Default Argument */
float money(int current , float factor = 1.04f){
       return current*factor;
}

/* Constant Argument
If the argument is made constant then the argument value can't be changed while calling the function. It is mainly use pointer*/
int Product12(int c, const int a =12){
                    return a*c;
}


int main(){
       
       cout<<"The product of 45 ans 65 is "<<Product(45, 65)<<endl;
       int m = 100000;
       cout<<"If you have "<<m<<" money then on a year you get "<<money(m)<< endl;
       cout<<"If you have "<<m<<" money and you are Employeee then on a year you get "<<money(m, 1.1)<< endl;
       cout<<Product12(45, 56)<<endl;

    return 0;
}

