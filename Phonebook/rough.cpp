#include<iostream>
using namespace std;

void welcome(){}
class a{
    public:
    void greet(){
        welcome();
    }
};


int main(){
    string name;
    getline(cin, name);
    printf("welcome\n");
    printf("greet\n");
    cout<<"greet2"<<endl;
    cout<<name<<endl;
    return 0;
}