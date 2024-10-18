#include <iostream>
#include <vector>

using namespace std;
// Function Prototypes
void printParallel(vector<double>&, vector<string>&);

/*******************************************************************************
 * Description:
 * The main function. Initializes vectors for name and numbers to be displayed side
 * by side on the terminal.
 *
 *
 * Input:
 * 1 Double reference for number vector
 * 2 String for name vector
 *
 * Output:
 * Terminates
*******************************************************************************/
int main (){

	vector<double> numberVector(5);
	for (double& number : numberVector){
		cout << "Enter a floating-point number: ";
		cin >> number;
	}

	vector<string> nameVector;
	cin.ignore();
	for (int i = 0; i < 5; i++){
		string name;
		cout << "Enter a name: ";
		getline(cin, name);
		nameVector.push_back(name);
	}

	printParallel(numberVector,nameVector);
	// terminate
	return 0;
}
/*******************************************************************************
 * Description:
 * Function that displays a vector with double and a string.
 *
 *
 * Input:
 * 1 Double reference for number vector
 * 2 String for name vector
 *
 * Output:
 * sends printing data to main to display function side by side.
*******************************************************************************/
void printParallel(vector<double>& parallelVector, vector<string>& stringVec){
	for (int i = 0;i < 5; i++){
		cout << parallelVector.at(i) << " " << stringVec.at(i) << endl;
	}cout << endl;
}
