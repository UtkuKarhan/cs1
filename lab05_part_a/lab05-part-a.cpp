#include <iostream>
#include <string>

using namespace std;

int main()
{
    // declare and initialize variables
    int numSiblings = 0;
    string fullName, city;

    // gather input from the user
    cout << "Enter your full name: ";
    getline(cin,fullName);
    // TODO: write statement to get input
    cout << "Enter a how many siblings you have: ";
    cin >> numSiblings;
    // TODO: write statement to get input
    cin.ignore();
    cout << "Enter your current city: ";
    getline(cin,city);

    // TODO: display that information
    cout << "Hello " << fullName << endl;
    cout << "You have " << numSiblings
    	 << " siblings and live in " << city << endl;

    // TODO: display the length of each `string` variable
    cout << "Your name has " << fullName.length() << " characters." << endl;
    cout << "Your city has " << city.length() << " characters." << endl;
    // terminate
    return 0;
}
