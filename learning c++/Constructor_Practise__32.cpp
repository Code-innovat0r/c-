#include <iostream>
#include <cmath>
using namespace std;

class point
{
     double x1, x2, y1, y2;

public:
     point()
     {
          cout << "Enter the x1 -> " << endl;
          cin >> x1;
          cout << "Enter the x2 -> " << endl;
          cin >> x2;
          cout << "Enter the y1 -> " << endl;
          cin >> y1;
          cout << "Enter the y2 -> " << endl;
          cin >> y2;
     }
     void distance()
     {
          double x3 = x2 - x1;
          double y3 = y2 - y1;
          double x = x3*x3;
          double y = y3*y3;
          double z = x + y;
          cout << "The Distance between the points are -> " << sqrt(z) << endl;
     }
};

int main()
{
     point p;
     p.distance();
     return 0;
}