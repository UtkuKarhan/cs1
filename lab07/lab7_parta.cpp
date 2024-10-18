#include <iostream>
using namespace std;

int main ()
{
	//prompt user for two numbers
	int num1, num2;

	cout << "Enter two numbers, first one: ";
	cin >> num1;
	
	cout << "Enter two numbers, second one: ";
	cin >> num2;
	//initial flag value
	bool flag = false;

	if (num1 > 0)
	{
		if (num2 < 0)
		{
			flag = true;
		}
	}
	else if (num1 == -5)
	{
		if (num2 > 0)
		{
			flag = true;
		}
	}
	if (flag)
	{
		cout << "Complex Condition met!";
	}
	else
	{
		cout << "End";
	}
	//terminate
	return 0;
}
