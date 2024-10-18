#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    // display the menu options
    const char FILL  = '-';
    const int  WIDTH = 40;
    cout << setfill(FILL) << setw(WIDTH) << "" << endl;
    cout << "1. Calculate the length of a sentence\n";
    cout << "2. Validate inside a range\n";
    cout << "3. Validate outside a range\n";
    cout << "4. Random Number Generator\n";
    cout << setfill(FILL) << setw(WIDTH) << "" << endl;

    // get the user's choice
    unsigned userChoice = 0;
    // for use with separate choice options
    int userNumber = 0;
    cout << "Enter the option you want: ";
    cin  >> userChoice;
    srand(time(0));

    switch(userChoice){
    case 1:{
    	cout << "Enter your favorite quote from someone in history: " << endl;
    	string favQuote;
    	cin.ignore();
    	getline(cin,favQuote);
    	cout << "Your quote has " << favQuote.length() << " characters!" << endl;
    	break;
    }
    case 2:{
    	cout << "Enter your favorite quote from someone in history: " << endl;
    	string favQuote;
    	cin.ignore();
    	getline(cin,favQuote);
    	cout << "Your quote has " << favQuote.length() << " characters!" << endl;
    	break;
    }
    case 3:{
    	cout << "I am going to check if your number is outside the range of -54 and 147 using magic!" << endl;
    	cout << "Enter your number: " << endl;
    	cin >> userNumber;
    	if (userNumber < -54 || userNumber > 147){
    		cout << "The number you entered is smaller than -54 or bigger than 147." << endl;
    	    	}
    	break;
    }
    case 4:{
    	int MIN_VAL, MAX_VAL;
    	cout << "Enter a minimum value: " << endl;
    	cin >> MIN_VAL;
    	cout << "Enter a maximum value: " << endl;
    	cin >> MAX_VAL;
    	int randUserNum = MIN_VAL + rand()% (MAX_VAL - MIN_VAL +1);
    	cout << "A random number between " << MIN_VAL << " and " << MAX_VAL << " is "
    		 << randUserNum << endl;
    	break;
    }
    default:{
    	cout << "Error! You made an invalid choice!" << endl;
    }
    }

//    // TODO: option 1
//    if (userChoice == 1){
//    	cout << "Enter your favorite quote from someone in history: " << endl;
//    	string favQuote;
//    	cin.ignore();
//    	getline(cin,favQuote);
//    	cout << "Your quote has " << favQuote.length() << " characters!" << endl;
//    }
//    // TODO: option 2
//    else if (userChoice == 2){
//    	cout << "I am going to check if your number is between 25 and 65 using logic!" << endl;
//    	cout << "Enter your number: ";
//    	cin.ignore();
//    	cin >> userNumber;
//    	if (userNumber < 25 || userNumber > 63){
//    		cout << "You can't fool me! That number is not between 25 and 63!" << endl;
//    	}
//    	else{
//    		cout << "The number is between 25 and 63!" << endl;
//    	}
//    }
//    // TODO: option 3
//    else if (userChoice == 3) {
//    	cout << "I am going to check if your number is outside the range of -54 and 147 using magic!" << endl;
//    	cout << "Enter your number: " << endl;
//    	cin >> userNumber;
//    	if (userNumber < -54 || userNumber > 147){
//    		cout << "The number you entered is smaller than -54 or bigger than 147." << endl;
//    	}
//    	else{
//    		cout << "No fooling my magical logic! That number is in between -54 and 147!" << endl;
//    	}
//    }
    // good bye message
    cout << "Good bye! Thanks for using my program :)\n";

    // terminate
    return 0;
}
