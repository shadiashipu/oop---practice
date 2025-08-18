#include <iostream>
using namespace std;

class SeriesSum {
    int sum;
public:
    SeriesSum(int arr[], int n) {
        sum = 0;
        for (int i = 0; i < n; i++) {
            sum += arr[i];
        }
    }

    void display() {
        cout << "Sum is: " << sum << endl;
    }
};

int main() {
    int n;
    cout << "How many numbers? ";
    cin >> n;

    int arr[n];
    cout << "Enter numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    SeriesSum s(arr, n);
    s.display();

    return 0;

}
