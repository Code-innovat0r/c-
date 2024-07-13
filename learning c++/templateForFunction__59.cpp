#include<iostream>
using namespace std;

template <typename T>
void swapp(T &a, T &b){
    T temp = a;
    a = b; 
    b = temp;
}


int main(){
    int x = 23, y = 56;
    swapp(x, y);  //OR  swapp<int>(x, y);    
    swapp<int>(int 12, int 23); // -> will be an error
    printf("The value of the x is %d and y is %d", x, y); 
    // %d for int
    // %f for float
    return 0;
}