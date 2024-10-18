#include <iostream>
using namespace std;
/****************************
 * Description:
 * First todo
 *
 * Input:
 * User defined input for an integer after a prompt
 *
 * Output:
 * Return the value of the integer
 */
int getNumber()
{
	int userNum;
	cout << "Enter a number: " << endl;
	cin >> userNum;
	return userNum;
}
/*Description:
 * Second todo
 *
 * Input:
 * User defined string message after a prompt
 *
 * Output:
 * Return the string
 */

string userMsg()
{
	string msg;
	cout << "Enter a message: " << endl;
	cin.ignore();
	getline(cin,msg);
	return msg;
}

/*Description:
 * Third todo
 *
 * Input:
 * User defined input for number of times to repeat message. One integer for amount of loops
 * and string input for the message to repeat.
 *
 * Output:
 * Void
 */

void repeatLoop(int userNum, string msg)
{
	for (int i = 1; i <= userNum; i++)
	{
		cout << msg << endl;
	}
}

int main()
{
	int num = getNumber();
	string message = userMsg();

	repeatLoop(num,message);
	return 0;
}
