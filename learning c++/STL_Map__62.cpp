#include<iostream>
#include<map>
using namespace std;


/* Map is an associative array store data in the form of the dictionary */

int main(){
    //Creatin a map
    map<string, int> marksmap; //marksmap is the name of the map
    marksmap["Paras"] = 100;
    marksmap["Shyam"] = 20;
    marksmap["Aman"] = 10;
    marksmap.insert({{"Ram", 99}, {"krishna", 99}});
    marksmap["Krishna2"] = 23;
    map<string, int> :: iterator iter;
    /* Print in the shorted form as per the first character of the key */
    for (iter = marksmap.begin(); iter!=marksmap.end(); iter++){
        cout<<(*iter).first<<" = "<<(*iter).second<<endl;
    }

    /* Size of the map */
    cout<<"The size of the map is: "<<marksmap.size()<<endl;
    cout<<"The max size of the map is: "<< marksmap.max_size()<<endl;
    cout<<"Cheking for empty(0-false, 1-true): "<<marksmap.empty()<<endl;

    marksmap.clear();
    printf("Marksmap is cleared, Now cheking for the empty\n");
    cout<<"Cheking for empty(0-false, 1-true): "<<marksmap.empty()<<endl;

    return 0;
}