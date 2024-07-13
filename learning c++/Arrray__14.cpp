#include<iostream>
using namespace std;

int main(){
    double marks[4];
    marks[0] = 23.0;
    marks[1] = 22.0;
    marks[2] = 25.0;
    marks[3] = 24.0;
    marks[2] = 26.0; // will change the marks at the index 2
//     cout<<marks;
    int c = sizeof(marks)/sizeof(double); // Give you the size of the array
    for(int i = 0; i < c ; i++){
                    cout<<marks[i]<<endl;
    }

    cout<<endl<<endl;

    /* Using While and do-while loop for array */
    int f = 0;
    while(f<c){
                    cout<<marks[f]<<endl;
                    f++;
    }

    cout<<endl<<endl;
    int g = 0;
    do{
          cout<<marks[g]<<endl;
                    g++;          
    }while (g<c);
    
    return 0;
}