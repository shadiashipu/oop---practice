#include<iostream>
using namespace std;

class Animal {
public:
    string name;
    int age;
    string sex;

    Animal(string n, int a, string s){
       name = n;
       age = a;
       sex = s;
    }

    Animal(string n, string s){
       name = n;
       sex = s;
    }

      Animal(string n){
       name = n;
    }

    void print() {
        cout << "Name: "<< name << endl;
        cout << "Age: "<<age << endl;
        cout << "Sex: "<<sex << endl<< endl;
    }

    void isAdult(){
        if(age>=18) {
            cout << name << " is adult" << endl;
        }
        else {
            cout << name << " is not adult" << endl;
        }
    }
};

int main(){
    Animal cat("Cutu", 1, "Male");
    /*cat.name = "Cutu";
    cat.age = 1;
    cat.sex = "Male";
*/
    cat.print();
    cat.isAdult();


    Animal cow("Pucu", 25, "Female");
    /*cow.name = "Pucu";
    cow.age = 25;
    cow.sex = "Female";*/
    cow.print();
    cow.isAdult();

    Animal dog("Doggy", 35, "Male");
    dog.print();
    dog.isAdult();

    Animal goat("Ashif", "Male");
    goat.print();

    Animal bear("Bear");
    bear.print();


    return 0;
}

