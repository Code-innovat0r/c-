#include<iostream>
#include<fstream>
#include<string>


using namespace std;

int main(){
    
    /* Writitng in the file  */
    ofstream write_object;
    write_object.open("FileIOSample__54.txt");
    int i = 0;
    while (i<=20){
        write_object<<i<<". This is Paras"<<endl;
        i++;
    }
    write_object.close();

    /* Reading the file */
    ifstream read_object;
    read_object.open("FileIOSample__54.txt");
    while(read_object.eof() == 0){
        string i;
        getline(read_object, i);
        cout<<i<<endl;
    }
    read_object.close();

    return 0;
}