#include <iostream>
using namespace std;

class shop
{
    string iteam_name;
    float iteam_price;

public:
    void setData(string name, float price)
    {
        iteam_name = name;
        iteam_price = price;
    }
    void getData(void)
    {
        cout << "The iteam name is " << iteam_name << endl;
        cout << "The iteam price is " << iteam_price << endl;
    }
};

int main()
{
    shop *object = new shop[3]; // create 3 object
    (object)->setData("Dal", 23.50);
    (object + 1)->setData("Paneer", 50.00);
    (object + 2)->setData("Milk", 71);
    (object)->getData();
    (object + 1)->getData();
    (object + 2)->getData();

    cout << endl
         << endl
         << endl;

    /* OR , YOU CAN WRITE LIKE THIS  */
    (*object).setData("Dal", 23.50);
    (*(object + 1)).setData("Paneer", 50.00);
    (*(object + 2)).setData("Milk", 71);
    (*object).getData();
    (*(object + 1)).getData();
    (*(object + 2)).getData();

    return 0;
}