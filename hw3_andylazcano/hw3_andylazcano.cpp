#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
	//initialize header and prompt user for question
	srand(time(0));
	const char FILL  = '*';
	const int  WIDTH = 40;
	char  userChoice;
	cout << setfill(FILL) << setw(WIDTH) << "" << endl;
	cout << "You enter a cave and see 3 tunnels up ahead." << endl;
	cout << "Which route do you take?" << endl;
	cout << "\tA. Door" << endl;
	cout << "\tB. Animal" << endl;
	cout << "\tC. Super Easy Tunnel" << endl;
	cout << setfill(FILL) << setw(WIDTH) << "" << endl;

	// prompt user for choice and store into variable
	cout << "Enter the tunnel of your choice! Remember, only a, b, or c!" << endl;
	cin >> userChoice;
	// the logic for door decision based on user input
	switch(userChoice){
		case 'a':
		case 'A':
		{
			cin.ignore();
			cout << "You enter tunnel A and discover . . . a locked door!" << endl;
			cout << "It reads: to unlock, enter a word that has an odd length greater than 4 characters!" << endl;
			string doorPassword;
			getline(cin,doorPassword);
			if (doorPassword.length() % 2 != 0 && doorPassword.length() > 4)
			{
				cout << "You hear the lock click . . . it must be open!" << endl;
				cout << "You push the door and up outside, YAY!" << endl;
				cout << "Good Bye!" << endl;
			}
			else
			{
				cout << "That did not work . . . you are now stuck FOREVER!" << endl;
			}
			break;
		}
		case 'b':
		case 'B':
		{
			cin.ignore();
			cout << "You enter tunnel B and discover . . . a bunny?" << endl;
			cout << "The bunny says: I will let you pass if you can guess my name!" << endl;
			cout << "Here's a hint: it rhymes with hugs." << endl;
			cout << "Enter your guess: ";
			string userGuess;
			getline(cin,userGuess);
			if (userGuess == "Bugs" || userGuess == "bugs"){
				cout << "The bunny bounces around and lets you through!" << endl;\
				cout << "Good Bye!" << endl;
			}
			else{
				cout << "That was incorrect . . . the bunny blocks your path FOREVER!" << endl;
			}
			break;
		}
		case 'c':
		case 'C':
		{
			cin.ignore();
			cout << "You enter tunnel C and discover . . . a MENACING clock!" << endl;
			cout << "The clock says I have two riddles for you!" << endl;
			cout << "First:  tell me a number that will pass my hidden test " << endl;
			double userNum = 0;
			int MIN_VAL = 1;
			int MAX_VAL = 12;
			double randUserNum = MIN_VAL + rand()% (MAX_VAL - MIN_VAL +1);
			cin >> userNum;
			if ((userNum > 0) && (pow((randUserNum / userNum),3.0) + sqrt(userNum + 5.74) >= 30))
			{
				cout << "Second: I'm thinking of a number between 1 and 12. What is it?" << endl;
				cin.ignore();
				cin >> randUserNum;
				if (randUserNum <= MIN_VAL && randUserNum >= MAX_VAL)
				{
					cout << "You beat the clock! It is no longer menacing. It lets you pass and up outside, yay!"
						 << endl;
				}
				else{
					cout << "You failed to guess the clock number . . . you turn into a clock forever!" << endl;
				}
			}
			else
			{
				cout << "You entered the wrong value . . . your journey ends here FOREVER!" << endl;
			}
			break;
		}
		default:
		{
			cout << "You only have three tunnels to choose from try again!" << endl;
		}
	}
	//terminate
	return 0;
}
