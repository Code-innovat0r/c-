/* With the oops we are creating the class that contain function for binary input , check and then a function that interchange the the place of the 1 and 0 with each other */

#include <string>
#include <iostream>
using namespace std;

class binary
{
private:
    string a;

private:
    int t = 0; // a is of string datatype
public:
    void Input(void); // function portfolio
    void check_binary(void)
    {
        for (int i = 0; i < a.length(); i++)
        {
            if (a.at(i) == '0' || a.at(i) == '1')
            {
                t = 1;
            }
        }
        if (t == 1)
        {
            cout << "Check done input value in Binary" << endl;
        }
        else
        {
            cout << "Inputed value is not a Binary number" << endl;
        }
    }
    void intercgange()
    {
        if (t == 1)
        {
            for (int i = 0; i < a.length(); i++)
            {
                if (a.at(i) == '0')
                {
                    a[i] = '1';
                }
                else
                {
                    a[i] = '0';
                }
            }
        }
    }
    void display_interchange()
    {
        if (t == 1)
        {
            cout << "The Binary on interchanging is " << a << endl;
        }
    }

} b;
void binary ::Input(void)
{
    cout << "Enter the Binary In number  -> " << endl;
    cin >> a;
}

int main()
{
    b.Input();
    b.check_binary();
    b.intercgange();
    b.display_interchange();
    return 0;
}