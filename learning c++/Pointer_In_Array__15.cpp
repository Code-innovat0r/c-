#include<iostream>
using namespace std;

int main(){
    double marks[4];
    marks[0] = 23.0;
    marks[1] = 22.0;
    marks[2] = 25.0;
    marks[3] = 24.0;
    cout<<marks<<endl;
    cout<<*marks<<endl;
    cout<<*(marks + 1)<<endl;
    cout<<*(marks + 2)<<endl;
    cout<<*(marks + 3)<<endl;
//     cout<<*(marks + 4)<<endl; //->is out of the index 
    return 0;
}