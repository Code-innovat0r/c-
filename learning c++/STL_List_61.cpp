/* Working with list in the stl */

#include<list>
#include<iostream>
using namespace std;

void display(list<char> & lis){
    list<char> :: iterator it = lis.begin();
    for (it; it != lis.end(); it++)
    {
       cout<<*(it)<<", ";
    }
    cout<<endl;
}



int main(){
    list<char> list1;//Create list1 that store float and automatically resize it
    list<char> list2;//list2 of length 10
    for (char i = 'a'; i < 'k'; i++)
    {
       list1.push_back(i);
    }
    display(list1);
    
    for (char i = 'k'; i < 'v'; i++)
    {
        list2.push_back(i);// you can use push_front
    }
    display(list2);

    cout<<endl<<endl;
    /* Pop in the list */
    list1.pop_back();
    display(list1);
    list2.pop_front();
    display(list2);

    cout<<endl<<endl;
    /* Remove function */
    list2.remove('m'); // remove all the occurance 'm' from the list2

    cout<<endl<<endl;
    /* Sort the list */
    list<char> list3{'p', 'r', 'q', 's'};
    list3.sort();
    display(list3);
    
    cout<<endl<<endl;
    /* Merging the list */
    list2.merge(list3);
    display(list2);    // notice the merge pattern


    return 0;
}