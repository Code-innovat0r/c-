#include<iostream>
using namespace std;

template <typename T> class Array{
    private:
        T* ptr;
        int size;
    public:
        Array(T arr[], int s);
        void print();
};

template<typename T> Array<T>:: Array (T arr[], int s){
    ptr = new T[s];
    size = s;
    for (int i = 0; i < size; i++){
        ptr[i] = arr[i]; 
    }
}   

template<typename T> void Array<T>:: print(){
    for (int i = 0; i < size; i++){
        cout<<" "<< *(ptr + i)<<endl;
    }
}   


int main(){
    
    /* Creating int class */
    int arr[5] = {1, 2, 3, 4, 5};
    Array<int> a(arr, 5);
    a.print();

    cout<<endl<<endl;

    /* Creating character class */
    char arr1[4] = {'A', 'B', 'C', 'D'};
    Array<char> s(arr1, 4);
    s.print();

    /* you can create number of class with different types of the data types */
    return 0;
}