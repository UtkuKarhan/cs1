#include <iostream>

using namespace std;

int main()
{
    // variables
    int maxVal = 0, userNumber = 0;
    const int SENTINEL = -1;

    // TODO: create a `while` loop version of finding the maximum number
    cout << "Enter positive numbers and I'll find the maximum value (-1 to stop): " << endl;
    cin >> userNumber;
    while (userNumber != SENTINEL)
    {
    	if (userNumber > userNumber)
    	{
    		maxVal = userNumber;
    	}
    	else
    	{
    		cout << "Please enter a positive number! Try again!" << endl;
    		cin >> userNumber;
    	}
    }
//     TODO: create a `do-while` loop version of finding the maximum number
    do
    {

    	if (userNumber > maxVal)
    	{
    		maxVal = userNumber;
    	}
    }
    while(userNumber != SENTINEL);

    // TODO: create a `for` loop version of finding the maximum number
    for (; userNumber != SENTINEL; maxVal == userNumber)
    {
    	if (userNumber > maxVal)
    	{
    		maxVal = userNumber;
    	}
    }
    // display results
    cout << "\nMaximum number entered: " << maxVal << endl;

    // terminate
    return 0;
}
