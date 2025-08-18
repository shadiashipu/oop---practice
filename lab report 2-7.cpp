#include <iostream>
using namespace std;

class PrimeNumber {
private:
    int number;

    bool isPrime() {
        if (number <= 1)
            return false;

        for (int i = 2; i * i <= number; ++i) {
            if (number % i == 0)
                return false;
        }
        return true;
    }

public:
    PrimeNumber(int num) {
        number = num;
    }

    void displayResult() {
        if (isPrime()) {
            cout << number << " is a prime number." << endl;
        } else {
            cout << number << " is not a prime number." << endl;
        }
    }
};

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    PrimeNumber pn(n);
    pn.displayResult();

    return 0;
}
