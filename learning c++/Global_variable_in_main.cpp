#include <iostream>
using namespace std;

// Global variable
int s = 24;

int main()
{
    // Local variable
    int s = 100;
    {
        extern int s;
        printf("%d is the value of the global variable \n", s);
    }
    printf("%d is the value of the local variable \n", s);

    return 0;
}