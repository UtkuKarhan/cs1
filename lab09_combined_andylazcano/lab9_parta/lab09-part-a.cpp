#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main()
{
    // prompt and store an integer number from the user
    int userNumber = 0;
    cout << "Enter an integer value: ";
    cin  >> userNumber;

    // seed the RNG using the current time
    srand(time(0));

    // TODO: generate a random number using the range:
    //       minimum - two times the user's number
    //       maximum - three times the user's number
    int Min_Val = 2 * userNumber;
    int Max_Val = 3 * userNumber;
    int randNum = Min_Val + rand() % (Max_Val - Min_Val +1);

    // TODO: display the random number
    cout << "Random number is " << randNum << endl;
    // display the calculating message
    cout << "Calculating . . .\n";
    
    // TODO: while loop to print *beep* or *boop*
    while(userNumber <= randNum)
    {
    	if (userNumber % 5 == 0)
    	{
    		cout << "*Beep* ";
    	}
    	else if (randNum % 10 == 0)
    	{
    		cout << "-Boop- ";
    	}
    	++userNumber;
    	--randNum;
    }
    // display the final message
    cout << "\nDone!\n";

    // terminate
    return 0;
}
