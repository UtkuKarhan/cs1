#include "ADT.hpp"
/*******************************************************************************
 * Description:
 *
 * Function that displays menu options and returns enumerator for use throughout.
 * Recieves user data to make informed decisions.
*******************************************************************************/
ZooLocations menu() {
	int location = 0;
	cout << "You can go to: " << endl;
	cout << "\t1. Entrance" << endl;
	cout << "\t2. Ferosome Dog Exhibit" << endl;
	cout << "\t3. Troublesome felines Exhibit" << endl;
	cout << "\t4. Astonishing Sea Mammals Exhibit" << endl;
	cout << "\t5. Souvenirs at the Gift Shop" << endl;
	cout << "\t6. Exit the park" << endl << endl;
	cout << "Please enter location to visit. . ." << endl;

	cin >> location;
	if (location == 1) {
		return ENTRANCE;
	} else if (location == 2) {
		return EXHIBIT_1;
	} else if (location == 3) {
		return EXHIBIT_2;
	} else if (location == 4) {
		return EXHIBIT_3;
	} else if (location == 5) {
		return GIFT_SHOP;
	} else if (location == 6) {
		return EXIT;
	} else {
		cout << "Please select one of the following options..." << endl;
		return ENTRANCE;
	}
}
/*******************************************************************************
 * Description:
 *
 * Array string convertor from <canines> ADT and outputs a report to be used in
 * <exhibit_1>
*******************************************************************************/

string convert(canines c) {
	string report = "";
	string name = c.name;
	string breed = c.breed;
	string age = to_string(c.age);
	string weight = to_string(c.weight);
	string region = c.region;

	report += "Name: " + name + "\n";
	report += "Species: " + breed + "\n";
	report += "Age: " + age + "\n";
	report += "Weight: " + weight + "\n";
	report += "Origin: " + region + "\n";

	return report;
}

/*******************************************************************************
 * Description:
 *
 * Array string convertor from <felines> ADT and outputs a string report to be used in
 * <exhibit_2>
*******************************************************************************/

string convert(felines f) {
	string report = "";
	string name = f.name;
	string breed = f.breed;
	string age = to_string(f.age);
	string weight = to_string(f.weight);
	string region = f.region;
	report += "Name: " + name + "\n";
	report += "Species: " + breed + "\n";
	report += "Age: " + age + "\n";
	report += "Weight: " + weight + "\n";
	report += "Origin: " + region + "\n";
	return report;
}

/*******************************************************************************
 * Description:
 *
 * Array string convertor from <seaAnimals> ADT and outputs a string report to be used in
 * <exhibit_3>
*******************************************************************************/
string convert(seaAnimals s) {
	string report = "";
	string name = s.name;
	string breed = s.breed;
	string weight = to_string(s.weight);
	string region = s.region;
	report += "Name: " + name + "\n";
	report += "Species: " + breed + "\n";
	report += "Weight: " + weight + "\n";
	report += "Origin: " + region + "\n";
	return report;
}

/*******************************************************************************
 * Description:
 *
 * Array string convertor from <ZooLocations> ADT and outputs a string so the main function
 * can utilize the enum to output a string data type for use.
*******************************************************************************/

string convert(ZooLocations location) {
	switch (location) {
	case ENTRANCE:  return "Entrance";
	case EXHIBIT_1: return "Exhibit 1 - Wild Dogs";
	case EXHIBIT_2: return "Exhibit 2 - Felines";
	case EXHIBIT_3: return "Exhibit 3 - Sea Mammals";
	case GIFT_SHOP: return "Gift Shop!";
	case EXIT:		return "Exit";
	default: return "Try another option";
	}
}

/*******************************************************************************
 * Description:
 *
 * Inputs array data from canine array to loop and convert values to string to
 * output when the user decides to enter <exhibit_1>
*******************************************************************************/

void exhibit_1(canines array[], const int ROWSIZE) {
	cout << "You see " << ROWSIZE << " wild dogs! This is what the placard says: " << endl;
	cout << "\n************* WILD DOGS *************" << endl;
	for (int i = 0; i < ROWSIZE; i++){
		cout << convert(array[i]) << endl;
	}
	cout << "*****************************************" << endl;
}

/*******************************************************************************
 * Description:
 *
 * Inputs array data from feline array to loop and convert values to string to
 * output when the user decides to enter <exhibit_2>
*******************************************************************************/

void exhibit_2(felines array[], const int ROWSIZE) {
	cout << "You see " << ROWSIZE << " wild cats! This is what the placard says: " << endl;
	cout << "\n************* Felines ****************" << endl;
	for (int i = 0; i < ROWSIZE; i++){
		cout << convert(array[i]) << endl;
	}
	cout << "***************************************" << endl;
}

/*******************************************************************************
 * Description:
 *
 * Inputs array data from sea animals array to loop and convert values to string to
 * output when the user decides to enter <exhibit_3>
*******************************************************************************/

void exhibit_3(seaAnimals array[], const int ROWSIZE) {
	cout << "You see " << ROWSIZE << " wild sea mammals! This is what the placard says: " << endl;
	cout << "\n************* Sea Mammals **************" << endl;
	for (int i = 0; i < ROWSIZE; i++){
		cout << convert(array[i]) << endl;
	}
	cout << "***************************************" << endl;
}

/*******************************************************************************
 * Description:
 *
 * Establishes the gift shop portion of the program so the user can purchase
 * digital goods with balance that is checked to ensure funds are adequate for purchase.
 *
*******************************************************************************/

void giftShop() {
	static float balance = 500.00;
	int purchase = 0;
	int quantity = 0;
	string item1 = "Elephant Plush";
	string item2 = "Wolf Blanket";
	string item3 = "CamelBack Watter Bottle";
	string item4 = "Dinosaur Toy Collection";

	double price1 = 18.99;
	double price2 = 45.00;
	double price3 = 32.85;
	double price4 = 51.99;
	cout << "You entered the gift shop!" << endl;
	cout << "Your current balance is $" << balance << endl;

	cout << "You see on display: " << endl;
	cout << "\t1. " << item1 << ", $" << price1 << endl;
	cout << "\t2. " << item2 << ", $" << price2 << endl;
	cout << "\t3. " << item3 << ", $" << price3 << endl;
	cout << "\t4. " << item4 << ", $" << price4 << endl;
	cout << "Enter the item number you would like to purchase! (or -1 to quit)" << endl;
	cin >> purchase;
	if (purchase == 1) {
		cout << "How many would you like to purchase?";
		cin >> quantity;
		if ((price1 * quantity) > balance){
			cout << "\nSorry insufficient funds!" << endl;
		}
		else if ((price1 * quantity) < balance){
			balance -= (price1 * quantity);
		}
	}
	if (purchase == 2) {
		cout << "How many would you like to purchase?";
		cin >> quantity;
		if ((price2 * quantity) > balance){
			cout << "\nSorry insufficient funds!" << endl;
		}
		else if ((price2 * quantity) < balance){
			balance -= (price2 * quantity);
		}
	}
	if (purchase == 3) {
		cout << "How many would you like to purchase?";
		cin >> quantity;
		if ((price3 * quantity) > balance){
			cout << "\nSorry insufficient funds!" << endl;
		}
		else if ((price3 * quantity) < balance){
			balance -= (price3 * quantity);
		}
	}
	if (purchase == 4) {
		cout << "How many would you like to purchase?";
		cin >> quantity;
		if ((price4 * quantity) > balance){
			cout << "\nSorry insufficient funds!" << endl;
		}
		else if ((price4 * quantity) < balance){
			balance -= (price4 * quantity);
		}
	}
	cout << "\nYour new balance is $" << balance << endl << endl;
}

