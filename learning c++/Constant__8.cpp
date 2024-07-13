/* Suppose in your programe you have define the value for the pie, Now you didn't 
want your pie value change even accidentaly, in that case we use constant */

#include<iostream>
#include<iomanip>
using namespace std;
int main(){
       const long double pie = 22.0/7.0l;
       cout<<"The value for the pie is "<<pie<<endl;
//        pie = 23; //It will throw an error
       cout<<"The value for the pie is "<<pie<<endl;     
       cout<<"Using the setw "<<setw(4)<<pie<<endl;   
}