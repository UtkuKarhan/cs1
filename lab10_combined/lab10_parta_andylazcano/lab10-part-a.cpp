#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main()
{
    // seed the RNG using the current time
    srand(time(0));

    // declare and initialize variables
    const unsigned MIN = 1, MAX = 15;
    unsigned randomNum = MIN + rand() % (MAX - MIN + 1);
    unsigned userGuess = 0, numTries = 0;

    // introductory message
    cout << "Welcome to my random number guessing game!\n";
    cout << "My program will generate a random number between ";
    cout << MIN << " and " << MAX << ".\n";
    cout << "You need to guess what that number is. Go!\n\n";

    // TODO: use a `do-while` loop to allow user to guess the random number
    do
    {
    	cin >> userGuess;
    	if (userGuess > randomNum)
    	{
    		cout << "Too High!" << endl;
    		numTries++;
    	}
    	else if (userGuess < randomNum)
    	{
    		cout << "Too Low!" << endl;
    		numTries++;
    	}
    } while(userGuess != randomNum);

    // congratulate
    cout << "\nCongratulations, you got it right!\n";
    cout << "It took you " << numTries << " tries to guess correctly.\n";

    // terminate
    return 0;
}
