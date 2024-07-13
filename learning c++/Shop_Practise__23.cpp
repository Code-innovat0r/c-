#include <iostream>
using namespace std;

class shop
{
private:
                    int iteamId[1000];
                    int iteamCost[1000];
                    int counter = 0;

public:
                    void setDetail()
                    {
                                        cout << "Enter the code of " << counter + 1 << " Product  " << endl;
                                        cin >> iteamId[counter];
                                        cout << "Enter the cost of " << counter + 1 << " Product  " << endl;
                                        cin >> iteamCost[counter];
                                        counter++;
                    }
                    void Display()
                    {
                                        for (int i = 0; i < counter; i++)
                                        {
                                                            cout << i + 1 << ". "
                                                                 << "The Iteam code is " << iteamId[i] << endl;
                                                            cout << i + 1 << ". "
                                                                 << "The Iteam Price is " << iteamCost[i] << endl;
                                                            cout << "\n"
                                                                 << endl;
                                        }
                    }

} pizzaHut;

int main()
{
                    int a = 0;
                    while (true)
                    {
                                        pizzaHut.setDetail();
                                        cout << " 0 -> To continue \n 1 -> To view Iteam in shop and then Add more\n 2 -> To view Iteam in shop and then Exit\n 3 -> Exit" << endl;
                                        cin >> a;
                                        if (a == 1)
                                        {
                                                            pizzaHut.Display();
                                        }
                                        else if (a == 2)
                                        {
                                                         pizzaHut.Display();   
                                                         break;
                                        }
                                        
                                        else if (a == 3)
                                        {
                                                            cout << "Done!!!" << endl;
                                                            break;
                                        }
                    }
                    return 0;
}