#include<iostream>
using namespace std;
int main(){
      cout<<"Tell me your age "<<endl;
      int age;
      cin>>age;
      if (age<18 && age>=0){
             cout<<"Ohh No!! You are a kid, Soory you are not allowed to party"<<endl;       
      }
      else if (age==18){
             cout<<"You are 18, but not a kide So Welcome "<< endl;
      }
      else if (age<=0){
             cout<<"I have a dout, \n I think you haven't born yet "<< endl;
      }
      else{
             cout<<"You are Heartly Welcome to the Party,\nPlease enjoy"<<endl;      
      }
      

      /* Using Switch case 
      It Accept only the int and enum datatypes */
      cout<<"Tell me your Income anually "<<endl;
      int a;
      cin>>a;
      switch (a){
        case 200000:
           cout<<"You are eligible for 50% weavier"<<endl;
           break;
        case 300000:
           cout<<"You are eligible for 30% weavier"<<endl;
           break;
        default:
           cout<<"You are not eligible for any weavier"<<endl;
           break;
      }

      
      return 0;
}
