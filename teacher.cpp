#include <iostream>
using namespace std;

class Teacher {
public:
    string name;
    string sub;
    string dep;
    int salary;

    Teacher(string n, string s, string d, int sa){
        name = n;
        sub = s;
        dep = d;
        salary = sa;
    }

    Teacher(string n, string s, string d){
        name = n;
        sub = s;
        dep = d;
    }

    Teacher(string n, string s){
        name = n;
        sub = s;
    }

    Teacher(string n){
        name = n;
    }

    Teacher(){
    }

    void print(){
        cout <<"Name: " << name << endl;
        cout <<"Subject: " << sub << endl;
        cout <<"Department: " << dep << endl;
        cout <<"Salary: " << salary << endl;
    }

    void printSalaryInYear(){
        cout <<"Salary In Year = " << salary*12 << endl;
    }

    void takeInput(){
        cout << "Name: ";
        cin >> name;
        cout << endl << "Subject: ";
        cin >> sub;
        cout << endl << "Department: ";
        cin >> dep;
        cout << endl << "Salary: ";
        cin >> salary;
        cout << endl;
    }
};

int main(){
    Teacher t1;
    t1.takeInput();
    t1.print();
    t1.printSalaryInYear();

}
