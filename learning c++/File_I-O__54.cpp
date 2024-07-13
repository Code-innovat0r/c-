#include<fstream>
#include<iostream>
using namespace std;

/* The useful classes to deal with the files are:-
1. fstreambase --> Base class
2. ifstream --> derived from fstreambase
3. ofstream --> derived from fstreambase */

/* There are Two ways to open a file in c++:-
1. Using Constructor
2.  */

int main(){
    /* Writing a line in a file using a constructor */
    //it delete all the existing data and if not exist then create it 
    ofstream write("FileIOSample__54.txt");// write in object variable
    write<<"Thanks a lot for joining;;;"; // write the line in the file
    /* Using constructor to read a file */
    write.close();


    ifstream reader("FileIOSample__54.txt");// reader in object variable
    string str;
    // reader>>str; // read the first word only
    // cout<<str<<endl;
    getline(reader, str); // reader ka first line read kar ka str ma save kar do
    cout<<str<<endl;
    reader.close();
    return 0;
}