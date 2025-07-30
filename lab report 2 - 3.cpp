#include<iostream>
using namespace std;

class Arithmetic{
public:
    double x, y;

    Arithmetic(double a, double b){
        x = a;
        y = b;
    }
    double sum(){
        return x + y;
    }
    double sub(){
        return x - y;
    }
    double multi(){
        return x * y;
    }
    double division(){
        return x / y;
    };
    string toString(){
        return to_string(x) + " " + to_string(y);
    }
};

int main(){
    double x, y;

    cout << "X = ";
    cin >> x;
    cout << endl << "Y = ";
    cin >> y;
    cout << endl;

    Arithmetic a(x, y);

    cout << "Sum: " << a.sum() << endl << endl;
    cout << "Subtraction: " << a.sub() << endl << endl;
    cout << "Multiplication: " << a.multi() << endl << endl;
    cout << "Division: " << a.division() << endl;

    return 0;
}
