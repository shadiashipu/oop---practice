#include <iostream>
using namespace std;

class Student{
public:
    string name;
    string id;
    string batch;
    string dept;

    Student(string n, string i, string b, string d){
        name = n;
        id = i;
        batch = b;
        dept = d;
    }

    string toString(){
        return "Name: " + name + " ID: " + id + " Batch: " + batch + " Department: " + dept;
    }
};

int main(){
    string name, id, batch, dept;

    cout << "Name: ";
    cin >> name;
    cout << endl << "Id: ";
    cin >> id;
    cout << endl << "Batch: ";
    cin >> batch;
    cout << endl << "Department: ";
    cin >> dept;
    cout << endl;

    Student stu(name, id, batch, dept);
    cout << endl << stu.toString();

    return 0;
}
