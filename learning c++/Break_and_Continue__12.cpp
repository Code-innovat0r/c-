#include<iostream>
using namespace std;

int main(){
    /* Break Statement */
    for (int i = 0; i < 20; i++)
    {
       if (i<18){
          cout<<i<<endl;
       }
       else{
         cout<<"Loop is Ending";
         break;
       }
    }
    /* Loop will end at i = 18 */

    cout<<"\n\n";
    /* Continue Statement */
    for (int i = 0; i < 20; i++)
    {
       if (i==3){
          continue;
       }
       else{
         cout<<i<<endl;
       }
    }
    /* In the output note that, at f = 3 is not executed */
    return 0;
} 