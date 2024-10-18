#include <iostream>
#include <string>
using namespace std;

int main(){
	//prompt user for a message
	string message;
	cout << "Enter message: ";
	getline(cin,message);
	while(message.length() <= 5 && message.length() <= 10 )
	{
		cout << "Invalid! Message must be between 5 and 10 characters." << endl;
		cout << "Enter message: ";
		getline(cin,message);
	}
	int messageCounter = message.length();
	cout << "Countdown Initiating . . ." << endl;
	while (messageCounter > 0)
	{
		cout << messageCounter << ", ";
		--messageCounter;
	}
	cout << endl;
	cout << "Blast off to Planet " << message << "!" << endl;
	//terminate
	return 0;
}
