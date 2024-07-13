/* acosine -> acos(x) -> sec(x) */
/* asine -> asin(x) -> cosec(x) */
/* atan -> atan(x) -> cot(x) */

#include<iostream>
#include<cmath>
using namespace std;

class SimpleCalculator{
    double value1;
    double value2;
    int selection;
    void formate(){
        cout<<"Enter the first value -> "<<endl;
        cin>>value1;
        cout<<"Enter the second value -> "<<endl;
        cin>>value2;
    }
    public:
        void Setvalue(){
            switch (selection){
            case 1:
                formate();
                break;
            case 2:
                formate();
                break;
            case 3:
                formate();
                break;
            case 4:
                formate();
                break;
            default:
                exit(0);
            }
        } 
        void Options(){
            cout<<"What you want to Perform, please select -> "<<endl;
            cout<<"1 for Addition."<<endl;
            cout<<"2 for Substraction."<<endl;
            cout<<"3 for Multyplication."<<endl;
            cout<<"4 for Divivde."<<endl;
            cout<<"Any other integer to Exit."<<endl;
            cin>>selection;
        }
        void Operation(){
            switch (selection)
            {
            case 1:
                cout<<"On the Addition of the values we get -> "<<value1+value2<<endl;
                break;
            case 2:
                cout<<"On the Substraction of the values we get -> "<<value1-value2<<endl;
                break;
            case 3:
                cout<<"On the Multiplication of the values we get -> "<<value1*value2<<endl;
                break;
            case 4:
                cout<<"On the Division of the values we get -> "<<value1/value2<<endl;
                break;
            default:
                cout<<"*****Thanks for using ...******"<<endl;
                exit(0);
            }
        }
};

class TrigonometricCalculator{
   double angle;
   double angle_enter;
   int select;
   void formate(){
        cout<<"Enter the Angle -> "<<endl;
        cin>>angle_enter;
        angle = angle_enter*M_PI/180;
   }
   public:
       void setAngle(){
            switch (select){
            case 1: case 2: case 3: case 4: case 5: case 6:
                formate(); break;
            default:
                exit(0);
            }
       }
       void TrigoFunction_option(){
            cout<<"What you want to Perform, please select -> "<<endl;
            cout<<"1 for Sine."<<endl;
            cout<<"2 for Cosine."<<endl;
            cout<<"3 for Tangent."<<endl;
            cout<<"4 for Secant."<<endl;
            cout<<"5 for Cosec."<<endl;
            cout<<"6 for Cotangent."<<endl;
            cout<<"Any other integer to Exit."<<endl;
            cin>>select;
       }
       void result(){
            switch (select)
            {
            case 1:
                cout<<"The Sine of the angle is -> "<<sin(angle)<<endl;
                break;
            case 2:
                cout<<"The Cosine of the angle is -> "<<cos(angle)<<endl;
                break;
            case 3:
                cout<<"The Tangent of the angle is -> "<<tan(angle)<<endl;
                break;
            case 4:
                cout<<"The Secant of the angle is -> "<<1/cos(angle)<<endl;
                break;
            case 5:
                cout<<"The Cosec of the angle is -> "<<1/sin(angle)<<endl;
                break;
            case 6:
                cout<<"The cotangent of the angle is -> "<<1/tan(angle)<<endl;
                break;
            default:
                cout<<"******Thanks for using ...******"<<endl;
                exit(0);
            }     
       }
};

class Calculator : public SimpleCalculator, public TrigonometricCalculator{
    int select_calculator_type;
    int exit = 0;
    public:
        Calculator(){
            cout<<"WELCOME TO THE CALCUTOR IN C++, by PARAS"<<endl<<endl;
            cout<<"Pls select the type of the calculator -> "<<endl;
            cout<<"1 for Simple Calculator"<<endl;
            cout<<"2 for Scientific Calculator"<<endl;
            cin>>select_calculator_type;
            if (select_calculator_type==1){
                while(exit==0){
                    cout<<endl<<endl;
                    cout<<"Welcome to Simple Calculator"<<endl; 
                    Options();
                    cout<<endl;
                    Setvalue();
                    cout<<endl;
                    Operation();
                    cout<<endl;
                    cout<<"Want to solve more Problem\n0 - to continue\nAny other integer to Exit "<<endl;
                    cin>>exit;
                    if (exit!=0){
                        break;
                    }
                }
            }
            else if (select_calculator_type==2){
                while(exit==0){
                    cout<<endl<<endl;
                    cout<<"Welcome to Scientific Calculator"<<endl<<endl; 
                    TrigoFunction_option();
                    cout<<endl;
                    setAngle();
                    cout<<endl;
                    result();
                    cout<<endl;
                    cout<<"Want to solve more Problem\n0 - to continue\n any other integer to Exit "<<endl;
                    cin>>exit;
                    if (exit!=0){
                        break;
                    }
                }
            }
            else{
                cout<<"Invalid selection"<<endl;
            }
        }    
};

int main(){
    Calculator e;
    return 0;
}