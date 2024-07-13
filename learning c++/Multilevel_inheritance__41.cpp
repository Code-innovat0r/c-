/* It is the simple multilevel inheritance which set roll number and marks of physics and math and display percentage */

#include<iostream>
using namespace std;

class Student{
    protected:
        int roll_number;
    public:
        int set_roll_number(int);
        void get_roll_number();
};

int Student :: set_roll_number(int roll){
    roll_number = roll;
}

void Student :: get_roll_number(void){
    cout<<"The roll number of the student is: "<<roll_number<<endl;
}


class Exam : public Student{
    protected:
        double Physics;
        double Math;
        double Chemistry;
    public:
        double set_Marks(double, double, double);    
        void get_Marks();    
};

double Exam :: set_Marks(double m, double c, double p){
    Physics = p;
    Chemistry = c;
    Math = m;
}
void Exam :: get_Marks(){
    cout<<"Marks scored in Maths are: "<<Math<<endl;
    cout<<"Marks scored in Chemistry are: "<<Chemistry<<endl;
    cout<<"Marks scored in physics are: "<<Physics<<endl;
}

class Result : public Exam{
    private:
        double result_percentage;
    public:
        void Result_Percentage();
};

void Result :: Result_Percentage(void){
    get_roll_number();
    get_Marks();
    cout<<"Total Marks of the Student Out of 300 is: "<<Physics+Chemistry+Math<<endl;
    cout<<"Percentage You Scored is: "<<(Physics+Chemistry+Math)/3<<endl;
}

int main(){
    Result object;
    object.set_roll_number(5642);
    object.set_Marks(95, 95, 88);
    object.Result_Percentage();
    return 0;
}