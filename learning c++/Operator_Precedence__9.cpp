/* Operator Precedence */
#include<iostream>
using namespace std;
int main(){
      int a=3,b=5,c=5;
      int s = a+b*c;
      cout<<s<<endl; 
      int d = 9;
      int j = s/d*4;
      cout<<j<<endl;      
      int z,w,e,t;
      z = 1;w=3;e=6;t=8;
      cout<<w*(z+e*t/w)<<endl;
}