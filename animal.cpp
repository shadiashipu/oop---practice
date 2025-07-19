#include<iostream>
using namespace std;

class Animal {
public:
    string name;
    int age;
    string sex;

    void print() {
        cout << this->name << endl;
        cout << this->age << endl;
        cout << this->sex << endl;
    }

    void isAdult(){
        if(age>=18) {
            cout << this->name << " is adult" << endl;
        }
        else {
            cout << this->name << " is not adult" << endl;
        }
    }

    void takeInput (){
        cout<<"Name: ";
        cin >> name;

        cout<<"Age: ";
        cin >> age;

        cout<<"Sex: ";
        cin >> sex;
        cout << endl;
    }
};

int main(){
    Animal cat;
    cat.takeInput();
    cat.print();
    cat.isAdult();

    Animal cow;
    cow.takeInput();
    cow.print();
    cow.isAdult();

    Animal dog;
    dog.takeInput();
    dog.print();
    dog.isAdult();


    return 0;
}
