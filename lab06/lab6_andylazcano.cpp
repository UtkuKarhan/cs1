#include <iostream>
using namespace std;

int main()
{
	int num1 = 0, num2 = 0;
	//getting user input
	//client requested the sums be separated in the code.
	cout << "Enter two numbers: ";
	cin >> num1 >> num2;
	int sum = num1 + num2;
	cout << "The sum of both numbers is " << sum << endl;
    // branching statement
	if (num1 == num2)
	{
		cout << "The numbers are equal.";
	}
	else
	{
		cout << "The numbers are not equal.\n";
	}
	//terminate
	return 0;
}
