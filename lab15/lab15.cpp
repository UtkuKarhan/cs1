#include <cmath>
#include <iostream>

using namespace std;

/*******************************************************************************
 * Function prototypes
*******************************************************************************/

int getUserNumber();
bool isValid(int);
void calculate(int, int, int, int&);

/*******************************************************************************
 * Description:
 * Starting point of the program. Gets three valid numbers from the user.
 * Calculates and displays the result.
 *
 * Input:
 * N/A
 *
 * Output:
 * An integer that signals the exit code to the operating system (OS)
*******************************************************************************/

int main()
{
	int result = 0;
	int& resultRef = result;
	// TODO: get the first valid number
	int a = getUserNumber();

    // TODO: get the second valid number
    int b = getUserNumber();
    
    // TODO: get the third valid number
    int c = getUserNumber();

    // TODO: calculate the result by calling the function
    calculate(a, b, c, resultRef);
    // TODO: display the result
    cout << "The result is " << result << endl;
    // terminate
    return 0;
}

/*******************************************************************************
 * Description: A function to get user values for the upcoming calculation function.
 *
 * Input:
 * N/A.
 *
 * Output:
 * Valid responses for use checked by the validation test.
*******************************************************************************/

int getUserNumber() {
	// TODO 1
	int validNum = 0;
	do {
		cout << "Enter a valid number." << endl;
		cin >> validNum;
	} while (!isValid(validNum));
	return validNum;
}

/*******************************************************************************
 * Description: A function to perform a validation test.
 *
 * Input:
 * Number from user
 *
 * Output:
 * Boolean value for value testing.
*******************************************************************************/

bool isValid(int num)
{
    // TODO 2
	return num >= 29 || (num / 2) + 3 <= 11;
}

/*******************************************************************************
 * Description: A function to perform the calculation (4a) + (b^3.0) (-2c) + 1
 *
 * Input:
 * Three valid user numbers.
 *
 * Output:
 * The result from the equation in the description.
*******************************************************************************/

void calculate(int a, int b, int c, int& result)
{
    // TODO 3
	result = 0;
	a = 4 * a;
	b = pow(b, 3.0);
	c = -2 * c;
	result = (a + b + c) + 1;
}
