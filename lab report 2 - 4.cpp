#include<iostream>
#include<vector>
using namespace std;

class Student{
public:
    string name, id, batch, dept;
    int roll;

    Student(string n, string i, string b, string d, int r){
        name = n;
        id = i;
        batch = b;
        dept = d;
        roll = r;
    }
};

class Studentsrecord{
public:
    vector<Student> studentList;

    void addStudent(Student stu){
        studentList.push_back(stu);
    }
    void showlist(){
        for(int i = 0; i < studentList.size(); i++){
            cout << "Student List: " << endl;
            cout << i+1 << endl;
            cout <<"Name: " << studentList[i].name << endl;
            cout <<"ID: " << studentList[i].id << endl;
            cout <<"Batch: " << studentList[i].batch << endl;
            cout <<"Roll: " << studentList[i].roll << endl;
            cout <<"Department: " << studentList[i].dept << endl;
        }
    }
};

int main(){
    string name, id, batch, dept;
    int roll;
    int n, i;
    Studentsrecord stur;

    cout << "Input Student Count: ";
    cin >> n;

    for(i = 0; i < n; i++){
        cout << "Name = ";
        cin >> name;
        cout << endl << "ID = ";
        cin >> id;
        cout << endl << "Batch = ";
        cin >> batch;
        cout << endl << "Roll = ";
        cin >> roll;
        cout << endl << "Department = ";
        cin >> dept;
        cout << endl;

        Student stu(name, id, batch, dept, roll);
        stur.addStudent(stu);
    }
    stur.showlist();

    return 0;
}
