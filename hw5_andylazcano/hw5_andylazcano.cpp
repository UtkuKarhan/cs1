#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

// function prototypes
int calculate(int, int, int, int);
void changeTargetCoordinates(int&, int&, const int = 10);
void displayMenu(const int);
int generateRandomNumber(int, int);
int getNumber(string);
void simulate(int, int, int, int, int, const int = 10);
void updateEquation(int&, int&, int&);

/***********************Description***********************************:
 * Start of main function body. User determines decision whether to update the equation affecting trajectory or change target coordinates
 * using random number generator, or runs the simulation.
 *
 * Input:
 * N/A
 *
 * Output:
 * Returns 0.
 * */
int main() {
	srand(time(0));
	const int EXIT = -1;
	int userChoice = 0;
	string msg = "Enter your choice";
	int a;
	int b;
	int c;
	int x,y;
	int& a_Ref = a;
	int& b_Ref = b;
	int& c_Ref = c;
	int& x_Ref = x;
	int& y_Ref = y;
	cout << "Welcome space cadet to your training module." << endl;
	cout << "Here, you will gain experience in finding the correct trajectory to shoot down a stationary target." << endl;
	cout << "Good luck!" << endl << endl;
	displayMenu(EXIT);
	userChoice = getNumber(msg);
	do {
		if (userChoice == 1) {
			updateEquation(a, b, c);
			displayMenu(EXIT);
			userChoice = getNumber(msg);
		} else if (userChoice == 2) {
			changeTargetCoordinates(x, y);
			displayMenu(EXIT);
			userChoice = getNumber(msg);
		} else if (userChoice == 3) {
		simulate(a,b,c,x,y);
		} else if (userChoice == EXIT) {
			cout << "\nUntil next time cadet!" << endl;
		}
	} while (userChoice != EXIT);
	return 0;
}
/***********************Description***********************************:
 * Simple menu display. Provides user with information to make educated decision throughout simulation.
 *
 * Input:
 * Takes a value 'q' as a sentinel to exit simulation.
 *
 * Output:
 * If user inputs sentinel, simulation exits and returns 0.
 * */
void displayMenu(const int EXIT) {
	cout << "Here are your options (or enter " << EXIT << " to exit): " << endl;
	cout << "\t1. Update the equation coefficients" << endl;
	cout << "\t2. Re-roll the target coordinates" << endl;
	cout << "\t3. Run the simulation" << endl << endl;
}
/***********************Description***********************************:
 * A function to get a number from the user.
 *
 * Input:
 * <updateEquation> gives a label based on the coefficients involved in the simulation.
 *
 * Output:
 * Returns a number to be used as coefficient for simulation.
 *
 * */
int getNumber(string label) {
	int number = 0;
	cout << label << ": " << endl;
	cin >> number;
	return number;
}
/***********************Description***********************************:
 * Update equation function for simulation.  The user provides integers that are inputs to the equation for the
 * use in the simulation. Three integers (a,b, and c) are given a label so user can define each respectively.
 *
 * Input:
 * Three reference variables
 *
 * Output:
 * Integers as values for coefficients.
 * */
void updateEquation(int &a, int &b, int &c) {
	string x_2 = "Enter a value for x^2";
	string x = "Enter a value for x";
	string k = "Enter a value for C";

	a = getNumber(x_2);
	b = getNumber(x);
	c = getNumber(k);
	cout << "Your updated equation is " << a << "x^2 + " << b << "x + " << c << endl << endl;
}
/***********************Description***********************************:
 * Random number generator function.
 *
 * Input:
 * Minimum and maximum values from <changeTargetCoordinates> function.
 *
 * Output:
 * Returns a random number for use.
 * */
int generateRandomNumber(int x, int y) {
	int randomNumber = x + rand() % (y - x + 1);
	return randomNumber;
}
/***********************Description***********************************:
 * Function to use random number generator to give the user new target coordinates.
 *
 * Input:
 * Uses x and y references and a constant default value representing the default grid size
 * of 10.
 *
 * Output:
 * N/A
 * */
void changeTargetCoordinates(int& x_Ref, int& y_Ref, const int default_val){
	x_Ref = generateRandomNumber(1, default_val);
	y_Ref = generateRandomNumber(1, default_val);
	cout << endl << "Your new coordinate is " << "(" << x_Ref << "," << y_Ref << ")"
		 << endl << endl;
}
/***********************Description***********************************:
 * Function to use random number generator to give the user new target coordinates.
 *
 * Input:
 * Uses x and y references and a constant default value representing the default grid size
 * of 10.
 *
 * Output:
 * N/A
 * */
int calculate(int a, int b, int c, int x){
	int y = 0;
	a = a * pow(x,2.0);
	b = b * x;
	y = (a + b + c);
	return y;
}
/***********************Description***********************************:
 * Simulation. Generates x and y plot and tracks user successful collisions and timestamp information.
 * function has six parameters. The first three parameters represent the coefficients for the quadratic equation .
 * The next two parameters represent the x- and y-coordinate of the target. The final parameter is the size of the grid
 * the simulation is using (defaults to 10).
 * The simulation needs to keep track of and display how many times the space cadet has correctly hit the target while the program has been running.
 * The simulation proceeds by starting at timestamp 0 (this is the x-value). As the simulation progresses, this timestamp increments by 1 each time.
 * Display this information so the user knows what step they're on. The simulation ends if either the user says to stop, the projectile hit the target,
 * or the timestamp has exceeded the grid size.
 *
 * Input:
 * a- cofficient from equation
 * b- cofficient from equation
 * c- cofficient from equation
 * x- coordinate from target function
 * y- coordinate from target function
 * default grid size (defaults to 10)
 *
 * Output:
 * N/A
 * */
void simulate(int a, int b, int c, int x, int y, const int default_val) {
	const char target = 'T';
	const char projectile = '.';
	const char collision = '@';
	static int successHits = 0;
	char userResponse;
	int xTime = 0;
	const char FILL = ' ';
	string msg("Current x-timestamp");
	do {
		int yProjectile = calculate(a, b, c, xTime);
		for (int i = default_val; i >= 0; i--) {
			cout << left << setw(3) << i;
			cout << "| ";
			for (int j = 1; j <= default_val; j++) {
				if (j == x && i == y) {
					if (x == xTime && y == yProjectile) {
						cout << collision << FILL;
						successHits++;
					} else {
						cout << target << FILL;
					}
				} else if (i == yProjectile && j == xTime) {
					cout << projectile << FILL;
				} else {
					cout << FILL << FILL;
				}
			}
			cout << endl;
		}
		cout << setw(3) << " " << setfill('-') << setw(22) << "" << endl;
		cout << setfill(FILL) << setw(2) << "";
		for (int i = 0; i <= default_val; i++) {
			for (int j = 0; j <= default_val; j++) {
				if (i == j) {
					cout << " " << i;
				}
			}
		}
		cout << endl;
		cout << "Do you wish to continue? (y/n) " << endl;
		cout << msg << ": " << xTime;
		cin >> userResponse;
		xTime++;
	} while(userResponse != 'n');
}

