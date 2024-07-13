#include<iostream>
using namespace std;
int main(){
      /* Using the for Loop */
      for (int i = 1; i<11; i++){
                    cout<<"5 X "<<i<<" = "<<5*i<<endl;
      }


      cout<<"\n\n\n"; // just for the sepration in terminal 

      /* Using the while loop */
      int s = 1; 
      while(s<11){
             cout<<"6 X "<<s<<" = "<<5*s<<endl;
             s++;       
      }
      

      cout<<"\n\n\n"; // just for the sepration in terminal 

      /* Using the do-while loop 
      Difference between the while and do-while loop is that the do-while loop 
      run for the first time without checking any condition 
      Just in the below formate*/
      int z = 11;
      do{
         cout<<"I am the do while loop "<<z;
         z++;
      }while(z<10);
      /* It return 11 only because after increment z++ the value of z become 12
      and the while condition become false*/



      return 0;               
}