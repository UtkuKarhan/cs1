#include <iostream>

using namespace std;

struct Vechicle{
		string make;
		string model;
		int year;
		string owner;
		bool classic; // true = classic car/truck only
		bool transmissionType; // true = automatic
	};

int main(){
	Vechicle myVehicle = {
			"Subaru", "WRX",
			2015, "Me", false,
			false
	};

	Vechicle userVehicle;
	cout << "Enter the make of your vehicle: ";
	getline(cin,userVehicle.make);
	cout << "Enter the model of your vehicle: ";
	getline(cin,userVehicle.model);
	cout << "Enter the year of your vehicle: ";
	cin >> userVehicle.year;
	cout << "Enter the owner's name: ";
	cin.ignore();
	getline(cin,userVehicle.owner);
	cout << "Is it a classic vehicle (made 20 years before current date): ";
	cin >> userVehicle.classic;
	cout << "What is the transmission type (0 for manual, 1 for automatic): ";
	cin >> userVehicle.transmissionType;
	cout << endl;

	cout << "Owner: " << userVehicle.owner << endl;
	cout << "Year and Make / Model: " << userVehicle.year << " " << userVehicle.make << " / "
		 << userVehicle.model << endl;
	cout << "Classic: ";
	if (userVehicle.classic){
		cout << "Yes" << endl;
	}
	else{
		cout << "No" << endl;
	}
	cout << "Transmission: ";
	if (userVehicle.transmissionType){
		cout << "Automatic" << endl;
	}
	else{
		cout << "No" << endl;
	}
	cout << endl;

	cout << "Owner: " << myVehicle.owner << endl;
	cout << "Year and Make / Model: " << myVehicle.year << " " << myVehicle.make << " / " << myVehicle.model
		 << endl;
	cout << "Classic: " << endl;
	if (myVehicle.classic){
		cout << "Yes" << endl;
	}
	else{
		cout << "No" << endl;
	}
	cout << "Transmission: ";
	if (myVehicle.transmissionType){
		cout << "Automatic" << endl;
	}
	else{
		cout << "No" << endl;
	}


	// terminate
	return 0;
}
