#include<iostream>
using namespace std;
int main(){
      int a = 34;
      float d = 45.5f;
      double s = 34.656;

      /*Typecasting the float and double in integer*/
      cout<<"Float is round off to the integer "<<int(d)<<endl;
      cout<<"Float is round off to the integer "<<(int)d<<endl;
      cout<<"Double is round off to the integer "<<(int)s<<endl;
      cout<<"Double is round off to the integer "<<int(s)<<endl;

      /*Typecasting the int and double in Float*/
      cout<<"\n\n";
      cout<<"integer in Float "<<float(a)<<endl;
      cout<<"integer in Float "<<(float)a<<endl;
      cout<<"Double in Float "<<(float)s<<endl;
      cout<<"Double in Float "<<float(s)<<endl;

      /*Typecasting the int and Float in double*/
      cout<<"\n\n";
      cout<<"integer in Double "<<double(a)<<endl;
      cout<<"integer in Double "<<(double)a<<endl;
      cout<<"Float in Double "<<(double)s<<endl;
      cout<<"Float in Double "<<double(s)<<endl;
      
      /*Performing Some Function by Typecasting*/
      cout<<"\n\n";
      cout<<"The sum is "<< int(d) + s<<endl;
      cout<<"The sum 2 is "<< int(d) + a<<endl;

      return 0;
}
