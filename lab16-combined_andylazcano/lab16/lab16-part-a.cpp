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

    // TODO: create the array of size 12 for the magic 8-ball responses
    //       and initialize the elements using the given responses on Canvas
    const int SIZE = 12;
    string phrases[SIZE] = {"Yes, of course!",
    						"Without a doubt, yes.",
							"You can count on it.",
							"For sure!",
							"Ask me later.",
							"I'm not sure . . .",
							"I can't tell you right now.",
							"I'll tell you after my nap. Zzzzzz",
							"No way!",
							"I don't think so.",
							"Without a doubt . . . no!",
							"The answer is very clearly NOOOOO"};


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
