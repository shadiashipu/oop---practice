#include<iostream>
using namespace std;

class Employe{
public:
    string name;
    int id;
    string dept;
    int salary;

    Employe(string n, int i, string d, int s){
        name = n;
        id = i;
        dept = d;
        salary = s;
    }

    Employe(){}

    void takeInput(){
        cout <<"Name: ";
        cin >> name;
        cout << endl <<"ID: ";
        cin >> id;
        cout << endl <<"Department: ";
        cin >> dept;
        cout << endl <<"Salary: ";
        cin >> salary;
        cout << endl ;
    }

    void showInfo(){
        cout <<"Name: " << name << endl;
        cout <<"ID: " << id << endl;
        cout <<"Dept: " << dept << endl;
        cout << endl;
    }

    void showSalary(){
        cout <<"Salary: " << salary << endl << endl;
    }

    void showYearlySalary(){
        cout <<"YearlySalary: " << salary * 12 << endl << endl;
    }

    void taxPerYear(){

        double tax;

        if(salary > 0 && salary <= 1000){
            tax = salary * (1.0 / 100);
        }
        else if(salary >= 1001 && salary <= 5000){
            tax = salary * (3.0 / 100);
        }
        else if(salary >= 5001 && salary <= 10000){
            tax = salary * (5.0 / 100);
        }
        else{
            tax = salary * (15.0 / 100);
        }
        cout <<"Tax: " << tax << endl;
        cout <<"Salary After Tax: " << salary - tax << endl;
        cout <<"Tax Per Year: " << tax * 12 << endl;
    }
};

int main(){
    Employe emp;
    emp.takeInput();
    emp.showInfo();
    emp.showSalary();
    emp.showYearlySalary();
    emp.taxPerYear();

    return 0;
}
