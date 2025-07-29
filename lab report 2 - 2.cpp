#include <iostream>
using namespace std;

class Argument{
public:
    int x, y;

    Argument(int a, int b){
        x = a;
        y = b;
    }
    void swap(int& x, int& y){
        int temp;
        temp = x;
        x = y;
        y = temp;
    }
    string toString(){
        return to_string(x) + " " + to_string(y);
    }
};

int main(){
    int x, y;

    cout << "X = ";
    cin >> x;
    cout << endl << "Y = ";
    cin >> y;
    cout << endl;

    Argument argu(x, y);
    argu.swap(argu.x, argu.y);

    cout << endl << argu.toString() << endl;

    return 0;
}
