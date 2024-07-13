/* Function object is also called the functor. Function wrapped in a class so thatit available like an object */

#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;

int main(){
    int arr[] = {1, 45, 2, 454335, 32, 345};
    int size = sizeof(arr)/sizeof(int);

    // sort(arr, arr+4);/*Sort the array arr from index 0 to index (0+4) */
    sort(arr, arr+6, greater<int>());/*Sort the array arr in the decending order*/

    for (int i = 0; i <size ; i++)
    {
        cout<<*(arr+i)<<", "<<endl;
    }

    return 0;
}