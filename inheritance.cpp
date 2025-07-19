#include <iostream>
using namespace std;

class Vehicle {
  public:
    string brand = "Ford";
    int wheel;

    Vehicle(int wh) {
        wheel = wh;
    }

    void honk() {
      cout << "Tuut, tuut! \n" ;
    }
};

// Derived class
class Car: public Vehicle {
  public:
    Car():Vehicle(4){

    }
    string model = "Mustang";
};

class Bike: public Vehicle {
  public:
      Bike():Vehicle(2){
      }
    string model = "Suzuki";

    void honk() {
      cout << "Pip pip! \n" ;
    }
};

int main() {
  Car myCar;
  myCar.honk();
  cout << myCar.brand + " " + myCar.model << endl;
  cout << myCar.wheel<<endl<<endl;

  Bike myBike;
  myBike.honk();
  cout << myBike.brand + " " + myBike.model<<endl;
  cout << myBike.wheel<<endl<<endl;
  return 0;
}
