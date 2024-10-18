#include <iostream>
using namespace std;

/*******************************************************************************
 * Global variables
*******************************************************************************/

const int ROW_SIZE = 4;
const int COL_SIZE = 5;

/*******************************************************************************
 * Function prototypes
*******************************************************************************/

int total(const int[][COL_SIZE]);
double average(const int[][COL_SIZE]);
void userInit(int[][COL_SIZE]);

/*******************************************************************************
 * Description:
 * Starting point of the program. Declares and initializes a 2D array. Displays
 * the total sum and the average value. Repeats but with user values.
 *
 * Input:
 * N/A
 *
 * Output:
 * An integer that signals the exit code to the operating system (OS)
*******************************************************************************/

int main() {
    // TODO: declare and initialize a 2D array
	int ogArray[ROW_SIZE][COL_SIZE] =
	{
			{117, -76, 128, -68,  85},
			{105,  34,  -79,  54, 105},
			{-85, 151, 133, -50, 173},
			{-38, -20, 185, 173, -49}
	};

    // TODO: call functions to display the calculations
	cout << "Total: "  << total(ogArray) << endl;
	cout << "Average: " << average(ogArray) << endl;
    // now let the user try
    cout << "\nNow it's your turn!\n";

    // TODO: call functions to let user initialize 2D array and calculate again
    userInit(ogArray);
    cout << "Total: " << total(ogArray) << endl;
    cout << "Average: " << average(ogArray) << endl;
    // terminate
    return 0;
}
/*******************************************************************************
 * Description:
 * A function that sums up all the elements in an array.
 *
 *
 * Input:
 * Takes array elements from a declared array.
 *
 * Output:
 * Returns the result of the sum operation.
*******************************************************************************/

int total(const int totalArray[][COL_SIZE]){
	int sum = 0;
	for(int r = 0;r < ROW_SIZE; r++){
		for (int c = 0; c < COL_SIZE; c++){
			sum += totalArray[r][c];
		}
	}return sum;
}
/*******************************************************************************
 * Description:
 * A function that takes the average mean of all the elements in an array.
 *
 *
 * Input:
 * Takes array elements from a declared array.
 *
 * Output:
 * Returns the result of the sum divided by total elements for the operation.
*******************************************************************************/
double average(const int averageArray[][COL_SIZE]){
	double sum = 0;
	double average = 0;
	for(int r = 0; r < ROW_SIZE; r++){
		for (int c = 0; c < COL_SIZE; c++){
			sum += averageArray[r][c];
		}average = sum /(ROW_SIZE * COL_SIZE);
	}
	return average;
}
/*******************************************************************************
 * Description:
 * A function that allows user input to initilize own user array.
 *
 *
 * Input:
 * Takes array elements from a declared array.
 *
 * Output:
 * N/A
*******************************************************************************/
void userInit(int userArray[][COL_SIZE]){
	for (int r = 0; r < ROW_SIZE; r++){
		cout << "Enter 5 numbers in a row (" << r + 1 << "/4): ";
		for (int c = 0; c < COL_SIZE;c++){
			cin >> userArray[r][c];
		}
	}
}
