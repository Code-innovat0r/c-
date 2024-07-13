#include<iostream>
using namespace std;

int main(){
//       int a = 12;
//       int b = 234;
/*By default all the value contain . is consider as double by c++ compiler */
      int a = 12, b = 234;
      char s = 'S';
      float d = 1.222f; //float d = 1.222F;
      double f = 1.4343423444568347983; 
      bool x = true;
      long double e = 345.67l;  // long double e = 345.67L;
      cout<<"The value of int a,v is "<< a<<" , "<<b<<"\n"<<"The value of the Char s is "<<s<<"\n"<<"The value of the Float d is "<<d<<"\n"<<"The value of the Decimal f is "<<f<<"\n"<<"The value of the Boolean x is "<<x<<"\n";
      return 0;

      /* REFERENCE VARIABLE */
      /* you have your original name, nike name, school name, name in b/t friends but all refer to you only*/
      float k = 45.5f;
      float & l = k;  // l is refernceof the variable k
      cout<<k<<endl;
      cout<<l<<endl;
}