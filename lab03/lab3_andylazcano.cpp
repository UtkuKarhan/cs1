#include <iostream>
#include <string>
using namespace std;

int main()
{
	char courseGrade;
	short testGrade; // percent
	string favFood;
	string disLikeFood;
	double rectangleWidth, rectangleLength; //in feet
	bool petOwned;
	bool teaDrinker;

	courseGrade = 'A';
	testGrade = 90;
	favFood = "pizza", disLikeFood = "sour cream";
	rectangleWidth = 5.55, rectangleLength = 21.753;
	petOwned = false, teaDrinker = true;

	cout << "I want a letter grade of " << courseGrade << "!" << endl;
	cout << "I will work hard to get a grade of " << testGrade
		 << " on the first exam!" << endl;
	cout << "My favorite food is " << favFood << ", but I really dislike "
		 << disLikeFood << "." << endl;
	cout << "The length of the rectangle is " << rectangleLength << "." << endl;
	cout << "The width of the rectangle is " << rectangleWidth << "." << endl;
	cout << "For below 1 means yes and 0 means no: " << endl << "Do I drink tea? "
		 << teaDrinker << endl << "Do I have pets? " << petOwned << endl;

	int const INITIALPOPULATION = 1150;

	cout << "Doubling the initial population is " << INITIALPOPULATION *2 << endl;
	cout << "Half of the population is " << INITIALPOPULATION / 2 << endl;
	cout << "Adding 684 people to the initial population is " << INITIALPOPULATION + 684 << endl;
	cout << "Subtracting 123 from the population is " << INITIALPOPULATION - 123 << endl;
	cout << "If the government wants everyone to have a four-bedroom house, " << INITIALPOPULATION % 4
	     << " will be left out." << endl;


	//terminate
	return 0;
}
