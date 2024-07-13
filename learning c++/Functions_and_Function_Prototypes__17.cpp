/* Go throughnotes also */

#include<iostream>
using namespace std;


int sum(int a , int b){
       int c = a+b;
       return c;
}

void swap(int a, int b){
        int temp = a;
        a = b;
        b = temp;            
}
void Swappointer(int* a, int* b){
        int temp = *a;
        *a = *b;
        *b = temp;            
}
void SwapReferencevar(int &a, int &b){
        int temp = a;
        a = b;
        b = temp;            
}

/* Function prototype contain information like the datatype of return, arguments
and most important it tells the existance of the function 
In the below case function Substract is define below the line it is called 
so the prototype here confirm during compilation that the function exist with 
this properties */
void Substract(int s , int p); // Creating a function Prototype

int main(){
    int num1 , num2;
    cout<<"Enter first number"<<endl;
    cin>>num1;
    cout<<"Enter second number"<<endl;
    cin>>num2;
    cout<<"The sum of the numbers is "<<sum(num1, num2)<<endl;
    Substract(23, 20);
    int x = 20, y =30;
    cout<<"The value of the x is "<<x<<" and the value of the y is "<<y<<endl;
//     swap(x,y); //This is not able to swap the orginal value of the x,y
//     Swappointer(&x , &y);//This is able to swap the orginal value of the x,y
    SwapReferencevar(x, y);//This is able to swap the orginal value of the x,y
    cout<<"The value of the x is "<<x<<" and the value of the y is "<<y<<endl;
    return 0;
}

void Substract(int s, int p){
         int c = s-p;
         cout<<"The value on substraction is "<<c<<endl;           
}