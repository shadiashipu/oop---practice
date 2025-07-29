#include <iostream>
#include <vector>
using namespace std;

class Student{
public:
    string universityName;
    string subject;
    string name;
    string batch;
    int roll;

    Student(string u, string s, string n, string b, int r){
        universityName = u;
        subject = s;
        name = n;
        batch = b;
        roll = r;
    }

    void showInfo(){
        cout << "Student Info:"<<endl;
        cout << "University_Name: " << universityName << endl;
        cout << "Subject: " << subject << endl;
        cout << "Name: " << name << endl;
        cout << "Batch: " << batch << endl;
        cout << "Roll: " << roll << endl<<endl;
    }
};

class Teacher: public Student {
public:
    string jobVarsity;
    string department;
    int salary;
    vector<Student> studentList;

    Teacher(string j, string d, int s, string un, string su, string n, string b, int r):Student(un, su, n, b, r){
        jobVarsity = j;
        department = d;
        salary = s;

    }

    void addStudent(Student stu){
        studentList.push_back(stu);
    }

    void showTeacherInfo(){
        cout << "Teacher Info:"<<endl;
        cout << "JOB Varsity: " << jobVarsity << endl;
        cout << "DEPT: " << department << endl;
        cout << "Salary: " << salary << endl<<endl;
        showInfo();
    }

     void showStudentList(){
        cout << "Student List:"<<endl;
        for(int i = 0; i < studentList.size(); i++){
            studentList[i].showInfo();
            cout << endl<< endl;
        }
};
};
class Dean: public Teacher {
public:
    string department;
    vector<Teacher> teacherList;

    Dean(string d, string j, string de, int s, string un, string su, string n, string b, int r) : Teacher(j, de, s, un, su, n,  b, r){
        department = d;
    }

    void addTeacher(Teacher tea){
        teacherList.push_back(tea);
    }

    void showDeanInfo(){
        cout << "Dean Info:"<<endl;
        cout << "Department: " << department << endl<< endl;
        showTeacherInfo();
    }

    void showTeacherList(){
        cout << "Teacher List:"<<endl;
        for(int i = 0; i < teacherList.size(); i++){
            teacherList[i].showTeacherInfo();        }
        }

     void showStudentList(){
        cout << "Student List:"<<endl;
        for(int i = 0; i < studentList.size(); i++){
            studentList[i].showInfo();
        }
     }
};

int main(){
    Student student("WUB", "CSE", "Shadia", "67(A)", 3871);
    student.showInfo();
    cout<<endl<<endl<<endl;
    Teacher teacher("WUB", "CSE", 30000, "DIU", "CSE", "Asif", "45(B)", 8617);
    teacher.showTeacherInfo();
    teacher.addStudent(student);
    teacher.showStudentList();
    cout<<endl<<endl<<endl;
    Dean dean("CSE", "WUB", "CSE", 50000, "JU", "CSE", "Mehedi", "12A", 458);
    dean.showDeanInfo();
    dean.addTeacher(teacher);
    dean.showTeacherList();
    dean.addStudent(student);
    dean.showStudentList();

    return 0;
};
