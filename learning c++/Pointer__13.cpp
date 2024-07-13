/* Pointer is the kind of datatype which holds the address of other datatypes in memory  */

#include<iostream>
using namespace std;

int main(){
    int a = 200;
    int* b = &a; //int* specify that b is a pointer, &a gives location of the 'a'

    // & --> (Address of) operator
    cout<<"The address of the a in memory is "<<&a<<endl;
    cout<<"The address of the a in memory is "<<b<<endl;

    // * --> (Value at that location) -> Dereferance operator
    cout<<"The address of the a in memory is "<<a<<endl;
    cout<<"The address of the a in memory is "<<*b<<endl; //*b -> value at location store in b

    /* Pointer to Pointer */
    int** c = &b;
    cout<<c<<endl; //return address of b
    cout<<*c<<endl; // return address of a that store at b
    cout<<**c<<endl; // return value at location store in b
    return 0;
} 