#include <iostream>

using namespace std;

int main() {
	/********************
	 * Let the user decide which artwork to be printed to the terminal.
	 *
	 * User choice 1: Let the user decide amount of boxes and their width in the range of 3 to 10.
	 * User choice 2: Let the user decided how many squares to come up with a right side pascal's triangle
	 * 							It has to count up to the amount of squares decided and then count down from there.
	 * User choice 3: Let the user decide how long the stem of the X to be printed.
	 *
	 */

	int userChoice = 0;
	cout << "Welcome to my interactive art gallery, wonderful patron!" << endl;
	cout << "Here are the different exhibits you can visit: " << endl;
	cout << "\t1. Draw a stack of boxes" << endl;
	cout << "\t2. Draw a triangle of boxes" << endl;
	cout << "\t3. Draw an X" << endl;
	cout << "\t4. Exit" << endl;

	cout << "Enter your choice from the menu above. . ." << endl;
	cin >> userChoice;
	switch (userChoice) {
	case 1: {
		const char WIDTH = '-';
		const char BOX = '|';
		int userBox = 0;
		int userWidth = 0;
		int minValue = 3;
		int maxValue = 10;
		cout
				<< "Enter how many boxes do you want and their width (Between 3 and 10): "
				<< endl;
		cin >> userBox >> userWidth;
		while (userBox < minValue || userBox > maxValue || userWidth < minValue
				|| userWidth > maxValue) {
			cout << "The amount of boxes and width has to be between 3 and 10!"
					<< endl;
			cout << "Try Again" << endl;
			cin.ignore();
			cin >> userBox >> userWidth;
		}
		for (int i = 1; i <= (2 * userBox) + 1; i++) {
			for (int j = 1; j <= userWidth; j++) {
				if (i % 2 == 1) {
					cout << WIDTH;
				} else if ((i % 2 == 0) && (j == 1 || j == userWidth)) {
					cout << BOX;
				} else {
					cout << " ";
				}
			}
			cout << endl;
		}
		break;
	}
	case 2: {
		const char SIDES = '|';
		const char TOP = '_';
		int maxWidth = 0;
		int minValue = 2;
		int maxValue = 7;
		cout << "Enter the maximum width for the triangle (Between 2 and 7): "
				<< endl;
		cin >> maxWidth;
		while (maxWidth < minValue || maxWidth > maxValue) {
			cout << "The width of the triangle has to be between " << minValue
					<< "  and " << maxValue << endl;
			cout << "Try Again!";
			cin.ignore();
			cin >> maxWidth;
		}
		for (int i = 1; i <= (2 * maxWidth); i++) {
			for (int j = 1; j <= i + 1; j++) {
				if (i % 2 == 1 && j % 2 == 0) {
					cout << TOP;
				} else if (i % 2 == 0 && j % 2 == 1) {
					cout << SIDES;
				} else if (i % 2 == 1 && j % 2 == 1) {
					cout << " ";
				} else if (i % 2 == 0 && j % 2 == 0) {
					cout << TOP;
				}
			}
			cout << endl;
		}
		for (int i = (2 * maxWidth) + 1; i >= 1; i--) {
			for (int j = 1; j <= i - 2; j++) {
				if (i % 2 == 1 && j % 2 == 0) {
					cout << TOP;
				} else if (i % 2 == 0 && j % 2 == 1) {
					cout << SIDES;
				} else if (i % 2 == 1 && j % 2 == 1) {
					cout << " ";
				} else if (i % 2 == 0 && j % 2 == 0) {
					cout << TOP;
				}
			}
			if (i % 2 == 0 && i != 2) {
				cout << "|";
			}
			cout << endl;
		}
	}
		break;
	case 3: {
		const char SYMBOL1 = '/';
		const char SYMBOL2 = '\\';
		int maxValue = 10;
		int minValue = 1;
		int stemSize = 0;
		cout << "Enter the  stem size for the X (Between " << minValue
				<< " and " << maxValue << "): " << endl;
		cin >> stemSize;
		while (stemSize < minValue || stemSize > maxValue) {
			cout << "The width of the triangle has to be between " << minValue
					<< "  and " << maxValue << endl;
			cout << "Try Again!";
			cin.ignore();
			cin >> stemSize;
		}
		for (int i = 1; i <= 2 * stemSize; i++) {
			for (int j = 1; j <= 2 * stemSize; j++) {
				if (i == j) {
					cout << SYMBOL2;
				} else if (i + j == 2 * stemSize + 1) {
					cout << SYMBOL1;
				} else {
					cout << " ";
				}
			}
			cout << endl;
		}
		break;
	}
	case 4: {
		cout << "Thank you for visiting! See Ya Soon! ";
	}
		break;
	default: {
		cout
				<< "Please choose from the appropriate options! Run the program again!"
				<< endl;
	}
	}

//terminate
	return 0;
}

