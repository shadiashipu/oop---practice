#include <iostream>
using namespace std;

// Base class
class Animal {
  public:
    string name = "Animal";
    void animalSound() {
      cout << "The animal makes a sound \n";
    }
};

// Derived class
class Pig : public Animal {
  public:
      string name = "Pig";
      void animalSound() {
      cout << "The pig says: wee wee \n";
    }
};

// Derived class
class Dog : public Animal {
  public:
    string name = "Dog";
    void animalSound() {
      cout << "The dog says: bow wow \n";
    }
};

int main() {
  Animal myAnimal;
  Pig myPig;
  Dog myDog;

  myAnimal.animalSound();
  myPig.animalSound();
  myDog.animalSound();
  cout << endl;
  cout << myAnimal.name<<endl;
  cout << myPig.name<<endl;
  cout << myDog.name<<endl;
  return 0;
}
