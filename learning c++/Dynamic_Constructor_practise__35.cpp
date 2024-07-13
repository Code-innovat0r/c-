/* Dynamic word means the action or change while runtime that is made by the compiler */

// Bank Return System

#include <iostream>
using namespace std;

class BankDeposit
{
     double Principal;
     double interestRate;
     int year;
     double returnValue;

public:
     BankDeposit() {} // Blank constructor
     BankDeposit(double initialAmount, int time, double interest);
     BankDeposit(double initialAmount, int time, int interest);
};
BankDeposit ::BankDeposit(double initialAmount, int time, double interest)
{
     Principal = initialAmount;
     interestRate = interest;
     year = time;
     for (int i = 0; i < year; i++)
     {
          Principal += Principal*interest;
     }
     returnValue = Principal;
     cout<<"The amount after "<<time<< " year is "<<returnValue<<endl;
}
BankDeposit ::BankDeposit(double initialAmount, int time, int interest)
{
     double rate = double(interest)/100;
     Principal = initialAmount;
     interestRate = rate;
     year = time;
     for (int i = 0; i < year; i++)
     {
          Principal += Principal*rate;
     }
     returnValue = Principal;
     cout<<"The amount after "<<time<< " year is "<<returnValue<<endl;
}

int main()
{
     BankDeposit s(1000, 2, 2);
     BankDeposit g(1000, 2, .02);
     return 0;
}