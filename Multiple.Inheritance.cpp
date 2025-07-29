#include <iostream>
using namespace std;

class Vehicle {
public:
	int engine;
	int numberOfWheels;
	string color;
	int seats;

	Vehicle(int eng, int wheels, string col, int seat){
		engine = eng;
		numberOfWheels = wheels;
		color = col;
		seats = seat;
	}

	void honk() {
		cout << "Pip Pip Pip!" << endl;
	}

	void showInfo() {
        cout << "Engine: " << engine << endl;
		cout << "Wheels: " << numberOfWheels << endl;
		cout << "Color: " << color << endl;
		cout << "Seats: " << seats << endl << endl;
	}
};

class Access {
public:
	string model;
	string serial;
	string enginno;

	Access(string m, string s, string e) {
		model = m;
		serial = s;
		enginno = e;
	}

	void showAccessInfo() {
		cout << "Model: " << model << endl;
		cout << "Serial: " << serial << endl;
		cout << "Engin No: " << enginno << endl << endl;
	}

};

class Bike : public Vehicle, public Access {
public:
	string ownername;
	string reg;
	int price;

	Bike(string owner, string r, int p, int eng, int wheel, string col, int sit, string m, string s, string e)
	: Vehicle(eng, wheel, col, sit) , Access(m, s, e){
        ownername = owner;
        reg = r;
        price = p;
	}

	void showBikeInfo(){
        cout << "Owner Name: " << ownername << endl;
        cout << "Reg No: " << reg << endl;
        cout << "Price: " << price << endl << endl;
        showInfo();
        showAccessInfo();
	}
};


int main(){
    Bike bike("Asif", "09E7H5", 350000, 125, 2, "Blue", 2, "Suzuki", "45R3S2", "56432P");
    bike.showBikeInfo();
    bike.honk();

    return 0;
}

