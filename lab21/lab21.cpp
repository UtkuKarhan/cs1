#include <iostream>

using namespace std;

struct Manufacturer{
	int year;
	string make;
	string model;
};

struct Vechicle{
		Manufacturer yearMakeModel;
		string owner;
	};

void printVechicle(const Vechicle&);
Vechicle createVechicle();

/*******************************************************************************
 * Description:
 * Main function that initializes array and displays to the command line.
 *
 *
 * Input:
 * Takes array elements from a declared array.
 *
 * Output:
 * N/A
*******************************************************************************/
int main(){
	const int SIZE = 2;
	Vechicle userVechicle[SIZE];
	for (Vechicle& vechicles: userVechicle){
		vechicles = createVechicle();
	}
	for (unsigned i = 0; i < SIZE;i++){
		printVechicle(userVechicle[i]);
	}


	// terminate
	return 0;
}
/*******************************************************************************
 * Description:
 * Function that displays information from declared array.
 *
 *
 * Input:
 * Takes array elements from a declared array.
 *
 * Output:
 * N/A
*******************************************************************************/
void printVechicle(const Vechicle& userVehicle){
	cout << "Vechicle: " << userVehicle.yearMakeModel.year
		 << " " << userVehicle.yearMakeModel.make
		 << " " << userVehicle.yearMakeModel.model << endl;
	cout << "Owner: " << userVehicle.owner << endl;
	cout << endl;
}
/*******************************************************************************
 * Description:
 * Function that gathers user input to generate info for vehicle array.
 *
 *
 * Input:
 * User input.
 *
 * Output:
 * Returns data to declared array.
*******************************************************************************/
Vechicle createVechicle(){
	Vechicle vehicleArray;
	cout << "Enter owner's name: ";
	getline(cin, vehicleArray.owner);
	cout << "Enter the Year:";
	cin >> vehicleArray.yearMakeModel.year;
	cin.ignore();
	cout << "Enter the model: ";
	getline(cin,vehicleArray.yearMakeModel.model);
	cout << "Enter the make: ";
	getline(cin,vehicleArray.yearMakeModel.make);
	cout << endl;

	return vehicleArray;
}
