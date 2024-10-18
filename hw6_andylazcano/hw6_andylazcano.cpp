#include <iostream>
#include <cctype>
#include <cstring>
#include <string>
#include <iomanip>

using namespace std;

/**************************************************************
 * Function Protype
 * ************************************************************/
bool verify(const char pwd[], const int SIZE, unsigned& score);

/**************************************************************
 * Main function
 * Description-  Gathers password information from user
 *
 * utilizes verify function to ensure operational use
 *
 * ************************************************************/

int main(){
	const char FILL = '+';
	const int WIDTH = 65;
	const int SIZE = 31;
	char pwd[SIZE];
	unsigned strScore = 0;

	cout << setfill(FILL) << setw(WIDTH) << "" << endl;
	cout << "Welcome to my password verifier and strength score program!" << endl;
	cout <<	"Your password must meet all of the following conditions: " << endl;
    cout << "\t1. Contain at least twelve characters but less than " << SIZE -1 << endl;
    cout << "\t2. Contain at least one lowercase letter" << endl;
    cout << "\t3. Contain at least one uppercase letter" << endl;
    cout << "\t4. Contain at least one digit" << endl;
    cout << "\t5. Contain at least one punctuation mark" << endl;
    cout << "\t6. Cannot contain any whitespace" << endl;
    cout << setfill(FILL) << setw(WIDTH) << "" << endl;
    cout << endl << endl;

    do {
    	cout << "Enter your password: ";
    	cin.getline(pwd,SIZE);
    	verify(pwd, SIZE, strScore);
    	if (verify(pwd, SIZE, strScore)){
    		cout << "You entered a valid password!" << endl;
    		cout << "Password Strength: " << strScore;
    	}
    	else {
    		cout << "You entered an invalid password, Try again. . . " << endl;
    	}
    } while(!verify(pwd, SIZE, strScore));

	return 0;
}
/**************************************************************
 * Description
 * Verify function that takes character arrary and verifies parameters
 * for the main function.
 *
 * Input:
 * Constant Character array
 * constant size for array
 * value tracking "score"
 *
 * ************************************************************/
bool verify(const char pwd[], const int SIZE, unsigned& score){
	bool characterCheck = false;
	bool lowerCaseCheck = false;
	bool upperCaseCheck = false;
	bool digitNumCheck = false;
	bool punctCheck = false;
	bool spaceCheck = false;
	int length = strlen(pwd);
	bool verifiedCheck = false;

	for (int i = 0; i < length; i++) {
		if (length >= 12 && length <= SIZE) {
			characterCheck = true;
		}
		if (islower(pwd[i])){
			lowerCaseCheck = true;
		}
		if (isupper(pwd[i])){
			upperCaseCheck = true;
		}
		if (isdigit(pwd[i])){
			digitNumCheck = true;
		}
		if (ispunct(pwd[i])){
			punctCheck = true;
		}
		if (isspace(pwd[i])){
			spaceCheck = true;
		}
	}
	score = length;
	for (int i = 0; i < length; i++){
		bool complexScore = false;
		if (islower(pwd[i]) && !islower(pwd[i + 1])){
			complexScore = true;
		}
		if (isupper(pwd[i] && !isupper(pwd[i + 1]))){
			complexScore = true;
		}
		if (isdigit(pwd[i]) && !isdigit(pwd[i + 1])){
			complexScore = true;
		}
		if (ispunct(pwd[i]) && !ispunct(pwd[i + 1])){
			complexScore = true;
		}
		if (complexScore){
			score++;
		}
	}
	if (characterCheck && lowerCaseCheck &&
		upperCaseCheck && digitNumCheck  &&
		punctCheck     && !spaceCheck) {
		return true;
	}
	else {
		return false;
	}

	return verifiedCheck;
}


