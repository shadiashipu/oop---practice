#include <iostream>
using namespace std;

double getGpa(int mark){
    if(mark >= 80 && mark <= 100){
       return 4.00;
    }
    else if(mark >= 75 && mark < 80){
        return 3.75;
    }
    else if(mark >= 70 && mark < 75){
        return 3.50;
    }
    else if(mark >= 65 && mark < 70){
        return 3.25;
    }
    else if(mark >= 60 && mark < 65){
        return 3.00;
    }
    else{
        return 0.00;
    }
}
string getGrade(double point){
    if(point >= 4.00 && point <= 4.99){
        return "A+";
    }
    else if(point >= 3.50 && point <= 3.99){
        return "A";
    }
    else if(point >= 3.00 && point <= 3.49){
        return "A-";
    }
    else if(point >= 2.00 && point <= 2.99){
        return "B";
    }
    else if(point >= 1.00 && point <= 1.99){
        return "C";
    }
    else if(point >= 0.00 && point <= 0.99){
        return "F";
    }




}

class Student{
public:
    string name;
    int roll;
    int eee;
    int cse;
    int math;

    Student(string n, int r, int e, int c, int m){
        name = n;
        roll = r;
        eee = e;
        cse = c;
        math = m;
    }

    Student(){}

    void takeInput(){
         cout << "Name: ";
        cin >> name;
        cout << endl << "Roll: ";
        cin >> roll;
        cout << endl << "EEE: ";
        cin >> eee;
        cout << endl << "CSE: ";
        cin >> cse;
        cout << endl << "MATH: ";
        cin >> math;
        cout << endl;
    }

    void printGPA(){
        double eeeGpa = getGpa(eee);

        double cseGpa = getGpa(cse);

        double mathGpa = getGpa(math);

        cout <<"GPA: "<< ((eeeGpa + cseGpa + mathGpa) / 3) << endl << endl;
    }

    void printInfo(){
        cout <<"Name: " << name << endl;
        cout <<"Roll: " << roll << endl << endl;
    }

    void printResultGrade(){
        double eeePoint = getGpa(eee);
        double csePoint = getGpa(cse);
        double mathPoint = getGpa(math);

        cout << "CSE: "  << getGrade(eeePoint)  <<  " (" << eeePoint  << ")" << endl;
        cout << "EEE: "  << getGrade(csePoint)  <<  " (" << csePoint  << ")" << endl;
        cout << "MATH: " << getGrade(mathPoint) <<  " (" << mathPoint << ")" << endl << endl;
    }

    void showAll(){
       printInfo();
       printGPA();
       cout <<"Subject: " << endl;
       printResultGrade();
       cout << endl;
    }
};


int main(){
    Student student;
    student.takeInput();
    student.printGPA();
    student.printInfo();
    student.printResultGrade();
    student.showAll();

    return 0;
}
