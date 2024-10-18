#include <iostream>
#include <string>
using namespace std;

int main()
{
	//created constant variables, profile as necessary
	const string VOLUNTEER_NAME = "Joe Smitty";
	const float UNIT_RATE = 0.5;
	const int TOTAL_UNITSREQD = 15;
	const float PAYRATE = 5.5;

	//calculated variables
	float weeklyUnits;
	int leftoverUnits;
	int leftoverHours;
	float hoursVolunteered;
	float totalPay;

	//calculations to report
	hoursVolunteered = 8.5;
	weeklyUnits = hoursVolunteered * UNIT_RATE;
	leftoverUnits = TOTAL_UNITSREQD - weeklyUnits;
	leftoverHours = leftoverUnits / UNIT_RATE;
	totalPay = PAYRATE * hoursVolunteered;

	//prints out report
	cout << "Volunteer Report for: " << VOLUNTEER_NAME << endl << endl;
	cout << "He volunteered a total of " << hoursVolunteered
		 << " HOURS." << endl;
	cout << "His class uses a rate of " << UNIT_RATE << " per unit hour." << endl;
	cout << "He earned a total of " << weeklyUnits
		 << " credits from volunteering this week." << endl <<
		 "     **Units = Hours * Unit Rate**" << endl << endl;
	cout << "His class requires a total of " << TOTAL_UNITSREQD <<
		 " units for the semester." << endl;
	cout << "After this week, he only needs " << leftoverUnits <<
		 " UNITS to finish her goal." << endl <<
		 "     **Leftover units = Total Units - Weekly Units**" << endl << endl;
	cout << "He has " << leftoverHours << " volunteer HOURS remaining for the semester."
		 << endl << endl;
	cout << "He actually earned $" << totalPay << " from his volunteering!" << endl
		 <<"   **Total Pay = Pay Rate * Hours Volunteered**" << endl;

	// terminate
	return 0;
}
