#include <iostream>
using namespace std;

class Animal {
public:
    int leg;
    int age;

    bool speak;
    bool walk;
    bool eat;

    Animal(int l, int a, bool s, bool w, bool e) {
        leg = l;
        age = a;
        speak = s;
        walk = w;
        eat = e;
    }
};

class Monkey: public Animal {
public:
    Monkey(int age): Animal(4, age, false, true, true){

    }
    string kind = "Jongli";

    void sound(){
        cout << "Ci Ci Ci!" << endl;
    }
};

class Human: public Animal {
public:
    Human(int age): Animal(2, age, true, true, true){

    }
    string name = "Asif";

    void sound(){
        cout << "Hello!" << endl;
    }
};

int main(){
    Monkey mon(4);
    cout << mon.kind << endl;
    cout << mon.leg << " " << mon.age << endl;
    cout << mon.speak << " " << mon.walk << " " << mon.eat << endl;
    mon.sound();
    cout << endl;

    Human man(28);
    cout << man.name << endl;
    cout << man.leg << " " << man.age << endl;
    cout << man.speak << " " << man.walk << " " << man.eat << endl;
    man.sound();
    cout << endl;

    return 0;
}
