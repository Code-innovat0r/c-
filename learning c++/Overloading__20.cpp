#include<iostream>
#include<cmath>      // contain the value of the pie
using namespace std;

/* Function Calculate the volume of the Cylinder */
double Volume(double r, double h){
       return ((M_PI)*r*r*h);    // M_PI return the value ofthr pie
}

/* Function Calculate the volume of the Cube */
double Volume(double a){
       return (a*a*a);             
}

/* Function Calculate the volume of the Cuboid */
double Volume(double l, double h, double b){
        return (l*h*b);                    
} 


int main(){
    cout<<"The volume of the cylinder is "<<Volume(4.5, 6.7)<<endl;
    cout<<"The volume of the cube is "<<Volume(4, 8)<<endl;
    cout<<"The volume of the cuboid is "<<Volume(5.5, 5.7, 8)<<endl;
    return 0;
}