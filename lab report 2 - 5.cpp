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
    else if(mark >= 55 && mark < 60){
        return 2.75;
    }
    else if(mark >= 50 && mark < 55){
        return 2.50;
    }
    else if(mark >= 45 && mark < 50){
        return 2.25;
    }
    else if(mark >= 40 && mark < 45){
        return 2.00;
    }
    else{
        return 0.00;
    }
}
class Student{
public:
    string name, id;
    int roll;
    int cse;
    int eee;
    int math;

    Student(string n, string i, int r, int c, int e, int m){
        name = n;
        id = i;
        roll = r;
        cse = c;
        eee = e;
        math = m;
    }

     void printGPA(){

        double cseGpa = getGpa(cse);

        double eeeGpa = getGpa(eee);

        double mathGpa = getGpa(math);

        cout <<"GPA: "<< ((eeeGpa + cseGpa + mathGpa) / 3) << endl << endl;
    }
};

int main(){
    string name, id;
    int roll, cse, eee, math, n, i;

    cout << "Input Student: ";
    cin >> n;
    cout << endl;

    for(i = 0; i < n; i++){
        cout << "Name = ";
        cin >> name;
        cout << endl << "ID = ";
        cin >> id;
        cout << endl << "Roll = ";
        cin >> roll;
        cout << endl << "CSE = ";
        cin >> cse;
        cout << endl << "EEE = ";
        cin >> eee;
        cout << endl << "Math = ";
        cin >> math;
        cout << endl;

        Student stu(name, id, roll, cse, eee, math);
        stu.printGPA();
    }

    return 0;
}
