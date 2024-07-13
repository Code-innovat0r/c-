#include<iostream>
#include<list>
using namespace std;

// template <class T>
// void print(list<T> const &lis){
//     for(auto const &i: lis){
//         cout<<i<<endl;
//     }
// }

void display(list<char> & lis){
    list<char> :: iterator it = lis.begin();
    for (it; it != lis.end(); it++)
    {
       cout<<*(it)<<endl;
    }
}

int main(){
  list<char> list2(10);
    
  for (int i = 0; i < 8; i++){
    list2.push_back(char(i));
  }
  display(list2);
  return 0;
}