#include <iostream>
using namespace std;

class ParasCompany
{
        int Id;
        int salary;

public:
        void setId()
        {
                salary = 12000; // Setting salary
                cout << "Enter the Id of employee -> " << endl;
                cin >> Id;
                cout << "The employee Id is " << Id << endl;
                cout << endl;
        }
        void getId()
        {
                cout << "The employee Id is " << Id << endl;
        }
};

int main()
{

        ParasCompany id[23]; // The id is a array of length 23, which is a object also
        for (int i = 0; i < 23; i++)
        {
                id[i].setId();
                id[i].getId();
        }
        /* Now all the Ids are stored in the object of the Employee */
        return 0;
}