#include<iostream>
using namespace std;

int fact(int n)
{
    if (n <= 1){ // base case
        return 1;
    }    
    else{    
        return n*fact(n-1); //recursion calling function fact in itself
    }        
}
int main(){
    cout<<fact(5)<<endl;
    return 0;
}