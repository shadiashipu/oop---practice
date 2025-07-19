#include <iostream>
using namespace std;

class Employee {
  private:
    // Private attribute
    int salary;

  public:
    // Setter
    void setSalary(int s) {
        if(s > 0 && s <= 100){
        salary = s;
      }
    }
    // Getter
    int getSalary() {
      return salary;
    }
};

int main() {
  Employee myObj;
  myObj.setSalary(1000);
  cout << myObj.getSalary();
  return 0;
}
