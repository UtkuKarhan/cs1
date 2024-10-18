#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>


using namespace std;

int main(){
	ofstream writer;
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
	writer.open("surveyresults.txt");
	while(userContinue != 'n' && userContinue!= 'N'){
		cout << "Starting survey for user #" << numberOfUsers + 1 << endl;
		for (int i = 0; i < SIZE; i++){
			string userResponse;
			cout << surveyQuestions[i] << endl;
			getline(cin,userResponse);
			writer << "Response " << i + 1 << ": " << userResponse << endl;
			}
		cout << "Is there another person avaiable to perform this survey? " << endl;
		cin >> userContinue;
		if (userContinue == 'y' || userContinue == 'Y'){
			numberOfUsers++;
		}
		cin.ignore();
	}
	writer.close();
	return 0;
}
