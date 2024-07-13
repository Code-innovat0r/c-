/* Initializing list in constructor means the simple way to setdata 
this is only applicable for the constructors
SYNTAX->
constructor (argument) : initializing-section{
    code
}

CODE EXAMPLE
class Test{
    int a;
    int b;
    public:
        Test(int x, int y): a(x), b(y){cout<<"Constructor executed"<<endl;}
};

This means the value of a is equal to x and b is equal to y
*/

#include<iostream>
using namespace std;

class Test{
   int a;
   int b;
   public:
   /*Following operation you can perform */
    // Test(int x, int y): a(x) , b(y){
    // Test(int x, int y): a(x) , b(x+y){
    // Test(int x, int y): a(x) , b(x*y){
    // Test(int x, int y): a(x) , b(2*y){
    // Test(int x, int y): a(x) , b(y+a){
    // Test(int x, int y): a(x) , b(y+a){
    // Test(int x, int y): a(x+b) , b(y){  /*will be garbage value in a because b willinitialize later than the a, beacuse in private a is declared forst and then b, So first a will take the value and then b*/
    Test(int x, int y): b(y), a(x+b){  // It will also an error
        cout<<"The value of the a is "<<a<<endl;
        cout<<"The value of the b is "<<b<<endl;
    }
};


int main(){
    Test t(3, 5);    
    return 0;
}