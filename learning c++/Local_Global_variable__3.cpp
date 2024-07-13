#include<iostream>
using namespace std;
int glo = 34;  // glo is a global variable
void sum(){
     cout<<"I am a Global glo "<<glo<<"\n";
}
int main(){
      int glo = 23;  //This glo is Local variable for this Function
      glo = 35;  // It Update the Local Variable not the Global Variable 
      sum();  // Function First search in it scope for local glo and if not found the go for global
      cout<<"I am Local variable glo "<<glo;
}

