#include <iostream>
#include <string>

using namespace std;

/*******************************************************************************
 * Global variable
*******************************************************************************/

unsigned numCalls = 0;

/*******************************************************************************
 * Function prototypes
*******************************************************************************/

bool  checkValid(float);
float getFPNumber();
void  myFunc(float, bool = false);

/*******************************************************************************
 * Description:
 * Starting point of the program. Calls functions in various ways and
 * combinations. Displays the total number of function calls.
 *
 * Input:
 * N/A
 *
 * Output:
 * An integer representing the exit value to signal back to the OS
*******************************************************************************/

int main() {
    // call the functions
    myFunc(getFPNumber());
    myFunc(getFPNumber() + 9.5f);
    myFunc(getFPNumber(), true);
    myFunc(getFPNumber() - 17.84f, true);

    // display the total number of function calls made
    cout << "Number of function calls: " << numCalls << endl;

    // terminate
    return 0;
}

/*******************************************************************************
 * Description:
 * Validation check function for user number.
 *
 * Input:
 * N/A
 *
 * Output:
 * A boolean return value
*******************************************************************************/
bool checkValid(float userNum){
	if (userNum >= 6.7){
		return true;
	}
	else{
		return false;
	}
	numCalls++;
}
/*******************************************************************************
 * Description:
 * A function designed to grab a user number.
 *
 * Input:
 * A valid floating point and a boolean from the validation.
 *
 * Output:
 * A valid number
*******************************************************************************/

float getFPNumber (){
	float validNum = 0.0f;
	bool flag = false;
	do{
		cout << "Enter a floating point number: " << endl;
		cin >> validNum;
		flag = checkValid(validNum);
	}while(!flag);
	return validNum;
	numCalls++;
}
/*******************************************************************************
 * Description:
 * A function that performs the displaying of a static variable and then doubling
 * the display.  If the boolean was true, square the value.  If the boolean was false,
 * divide the first value by half.
 *
 * Input:
 * Uses the valid number.
 *
 * Output:
 * No output.
*******************************************************************************/

void myFunc(float num, bool flagFunc){
	static string msg = "cheese ";
	msg += msg;
	cout << msg << endl;
	if (flagFunc)
	{
		cout << num * num << endl;
	}
	else
	{
		cout << num / 2 << endl;
	}
	numCalls++;
}






