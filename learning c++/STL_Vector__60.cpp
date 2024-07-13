//when the size of the vector is 4, 2, 1, it is not working fine
//https://cplusplus.com/reference/vector/vector/ -> for more method in vector 
#include<iostream>
#include<vector>

using namespace std;

void display(vector<int> & v){  //take the reference of the integer vector
    for (int i = 0; i < v.size(); i++) // TO GET THE THE SIZE OF THE VECTOR
    {
        cout<<v.at(i)<<", "; // TO GET THE ELEMENT OF THE INDEX
    }
    
}

int main(){
    vector<int> v1; //CREATE A INTEGER VECTOR OF NAME V1 
    int s, element;
    cout<<"Enter the size of you vector: "<<endl;
    cin>>s;
    for (int i = 0; i < s; i++)
    {
        printf("Enter the %d element of your vector: ", i+1);
        cin>>element;
        v1.push_back(element);  //INSERT INTO VECTOR
    }
    display(v1);
    cout<<endl<<endl;

    /* Creating Iterator for the vector */
    vector<int> :: iterator itr = v1.begin();//iterator of name itr which point to begning
    /* vector_name.insert(iterator_name+x, no_of_copies_to_insert, element);
    This is the 
    syntax of the insertion in vector, no_of_copies is optional, 
    if you have used begin then itereator_name = 0, and for the insertion at particular index number add 'x' to iterator */

    cout<<*itr<<endl;//itr store location of index zero
    cout<<*(itr+1)<<endl;//itr store location of index one

    v1.insert(itr, 26);//insert 26 at index 0
    display(v1);
    cout<<endl<<endl;
    
    v1.insert(itr+1, 3, 23);//insert 3 copies of 23 at index number 1
    display(v1);
    cout<<endl<<endl;

    v1.pop_back(); // pop the last element
    display(v1);
    cout<<endl<<endl;

    // vector<char> vactor_name(3); character vector of length 3
    vector<int> v2(6, 14); // create a vector and insert 14 into it 6 times
    display(v2);

    /*  Swap vector */
    // vector_name1.swap(vector_name2); // and you done values of vector interchanged

    return 0;
}