#include <iostream>

using namespace std;

int getNumber() {
	int userNum;
	cout << "Enter a number: " << endl;
	cin >> userNum;
	return userNum;
}

void userChoice2() {
	int x = getNumber();
	int productX = 0;
	cout << "You have chosen Choice 2, Enter a number less than 10: "
			<< endl;
	cin >> x;
	cout << "The multiples of 3 up to 100 of that numbers are: " << endl;
	for (; productX <= 100; x++) {
		productX = x * 3;
		cout << productX << ",";
	}
	cout << endl;
}
int main() {

	userChoice2();

	return 0;
}
