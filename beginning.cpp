 #include<iostream>
 using namespace std;

class Student {
public:
    string name;
    int roll;
    int batch;
    string dept;
};

int main() {
    Student shadia;
    shadia.name = "Shadia";
    shadia.roll = 3871;
    shadia.batch = 67;
    shadia.dept = "CSE";

    cout << shadia.name << endl;
    cout << shadia.roll << endl;
    cout << shadia.batch << endl;
    cout << shadia.dept << endl;

    Student shohan;
    shohan.name = "Shohan";

    Student toufiq;
    toufiq.name = "Toufiq";


  return 0;
}
