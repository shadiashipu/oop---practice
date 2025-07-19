#include <iostream>
#include <vector>
using namespace std;

class Employe{
public:
    string name;
    string dept;
    int id;
    int salary;
    Employe(string n,
    string d,
    int i,
    int s){
        name = n;
        dept = d;
        salary = s;
        id = i;
    }
    Employe(){}

    void takeInput(){
        cout <<"Name: ";
        cin >> name ;
        cout << endl <<"Department: ";
        cin >> dept;
        cout << endl << "ID: ";
        cin >> id;
        cout << endl <<"Salary: ";
        cin >> salary;
        cout << endl;
    }

    void showInfo(){
        cout <<"Name: " << name << endl;
        cout <<"Department: " << dept << endl;
        cout <<"ID: " << id << endl;
        cout <<"Salary: " << salary << endl;
    }
};

class Office{
public:
    vector<Employe> employeList;
    string name;

    Office(string n){
        name = n;
    }
    Office(){}

    void addEmploye(Employe emp){
        employeList.push_back(emp);
    }

    void removeEmploye(int id){
        int index = -1;
        for(int i = 0; i < employeList.size(); i++){
            if(id == employeList[i].id){
                index = i;
            }
        }
        if(index != -1){
            employeList.erase(employeList.begin() + index);
        }
        else{
            cout << id << " ID NOT FOUND" << endl;
        }
    }

    void showList(){
       for(int i = 0; i < employeList.size(); i++){
            cout <<"Name: " << employeList[i].name << endl;
            cout <<"Department: " << employeList[i].dept << endl;
            cout <<"ID: " << employeList[i].id << endl;
            cout <<"Salary: " << employeList[i].salary << endl;
        }

    }

    void updateSalary(int id, int salary){
        int index = -1;
        for(int i = 0; i < employeList.size(); i++){
            if(id == employeList[i].id){
                employeList[i].salary = salary;
            }
        }
    }
};

int main(){
    int deleteId=1;
    Office off;

    Employe emp("Shadia", "CSE", 1,145);
    emp.takeInput();
    off.addEmploye(emp);
    off.updateSalary(1, 300);
    off.showList();


    off.showList();
    Employe emp1("Asif", "CSE", 2,145);
    emp1.takeInput();
    off.addEmploye(emp1);
    off.showList();
    cout << "Delete Id: ";
    cin>>deleteId;
    cout << endl;
    off.removeEmploye(deleteId);
    off.showList();

  return 0;
}
