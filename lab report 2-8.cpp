#include <iostream>
using namespace std;

class FactorialNumber {
private:
    int number;
    unsigned long long factorial;

    void calculateFactorial() {
        factorial = 1;
        for (int i = 1; i <= number; ++i) {
            factorial *= i;
        }
    }

public:

    FactorialNumber(int num) {
        number = num;
        calculateFactorial();
    }

    void displayResult() {
        cout << "Factorial of " << number << " is: " << factorial << endl;
    }
};

int main() {
    int n;
    cout << "Enter a non-negative integer: ";
    cin >> n;

    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
        return 1;
    }

    FactorialNumber fn(n);
    fn.displayResult();

    return 0;
}
