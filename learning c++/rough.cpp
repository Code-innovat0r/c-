#include<iostream>
using namespace std;

int main(){
    int arr[1];
    arr[0] = 23;
    cout<<*arr<<endl;


    int e = 23;
    int* t = &e;
    int *w = &e;
    cout<<t<<endl;
    cout<<w<<endl;



    return 0;
}