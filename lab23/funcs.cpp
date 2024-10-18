#include "funcs.hpp"
#include <iomanip>
#include <iostream>
#include <string>

/*******************************************************************************
 * Description:
 * Reads in the data from an input file chosen by the user. Displays that data
 * onto the screen.
 *
 * Input:
 * N/A
 *
 * Output:
 * N/A
*******************************************************************************/

void loadFile() {
    // variables
    ifstream inputFile;
    string   filename, line;

    // prompt and store the filename
    cout << "Enter the filename with extension that you want to load:\n";
    cin.ignore();
    getline(cin, filename);

    // TODO: try opening the file
    inputFile.open(filename);

    // TODO: display the data in the file
    getline(inputFile, line);
    // TODO: close the file
    inputFile.close();
}

/*******************************************************************************
 * Description:
 * Writes data to an output file chosen by the user. Asks the user which mode to
 * use (output or append). Calls the `survey` function to gather the data.
 *
 * Input:
 * N/A
 *
 * Output:
 * N/A
*******************************************************************************/

void saveFile() {
    // variables
    int      mode = -1;
    ofstream outputFile;
    string   filename;

    // prompt and store the filename
    cout << "Enter the filename with extension that you want to load:\n";
    cin.ignore();
    getline(cin, filename);

    // prompt and store for output or append mode
    while (mode != 0 && mode != 1) {
        cout << "Enter 0 for output (overwrite) mode or 1 for append mode:\n";
        cin  >> mode;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(4096, '\n');
            mode = -1;
        }
    }

    // TODO: try opening the file in the desired mode
    outputFile.open(filename);
    // TODO: start the survey
    survey(outputFile);
    // TODO: close the file
    outputFile.close();
}

/*******************************************************************************
 * Description:
 * Asks the current user a total of 5 survey questions. Saves the responses to
 * `outputFile`. Loops the survey so multiple users can take the survey in one
 * sitting.
 *
 * Input:
 * outputFile - a reference to an output file stream object
 *              (assumed to be opened and valid)
 *
 * Output:
 * N/A
*******************************************************************************/

void survey(ofstream& outputFile) {
    // TODO: use your survey code from last lab, making any necessary adjustments
	const int SIZE = 5;
	string surveyQuestions[SIZE] = {
			"Where did you grow up?",
			"Did anybody else you know have a car similar to yours",
			"Have you ever tried opening someone else's car as if it were yours?",
			"Do you lose your parking spot frequently?",
			"What was the first question I asked you?"
	};
	int numberOfUsers = 0;
	char userContinue;
	cout << setfill('+') << setw(60) << "" << endl;
	cout << "Welcome to my survey!" << endl;
	cout << "Please answer these 5 questions" << endl;
	cout << "Please note we will keeping this information for future reference" << endl;
	cout << setfill('+') << setw(60) << "" << endl;
	outputFile.open("surveyresults.txt");
	while (userContinue != 'n' && userContinue != 'N') {
		cout << "Starting survey for user #" << numberOfUsers + 1 << endl;
		for (int i = 0; i < SIZE; i++) {
			string userResponse;
			cout << surveyQuestions[i] << endl;
			getline(cin, userResponse);
			outputFile << "Response " << i + 1 << ": " << userResponse << endl;
		}
		cout << "Is there another person avaiable to perform this survey? "
				<< endl;
		cin >> userContinue;
		if (userContinue == 'y' || userContinue == 'yes') {
			numberOfUsers++;
		}
		cin.ignore();
	}
	outputFile.close();
}

