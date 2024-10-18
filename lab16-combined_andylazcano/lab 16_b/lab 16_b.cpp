#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    // constant variables
    const char FILL = '-';
    const int WIDTH = 50;

    // seed the RNG
    srand(time(0));

    // TODO: Create an array the user can define their own phrases for the use of the random
    // function from the previous lab.
    const int SIZE = 7;
    string phrases[SIZE];
    for (string& element:phrases){
    	cout << "Enter your fortune phrases!" << endl;
    	getline(cin, element);
    }


    // greeting message
    cout << setfill(FILL) << setw(WIDTH) << "" << endl;
    cout << "        THE MAGIC 8-BALL HAS BEEN SUMMONED!\n";

    // TODO: use a loop to let the user enter their questions
    string userQuestion, userResponse;
    int min_val = 0;
    int max_val = 11;
    do{
    	int randIndex = min_val + rand() % (max_val - min_val + 1);
    	cout << "Enter a question, so that I may answer it. . ." << endl;
    	getline(cin,userQuestion);
    	cout << phrases[randIndex] << endl;
    	cout << "Yes to continue?" << endl;
    	getline(cin, userResponse);
    }while(userResponse == "Yes" || userResponse == "yes");

    // final message
    cout << setfill(FILL) << setw(WIDTH) << "" << endl;
    cout << "           THE MAGIC 8-BALL NOW DEPARTS!\n";
    cout << setfill(FILL) << setw(WIDTH) << "" << endl;

    // terminate
    return 0;
}
