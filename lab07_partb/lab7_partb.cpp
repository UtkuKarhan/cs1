#include <iostream>
using namespace std;

int main ()
{
	//prompt user for two numbers
	int num1, num2;

	cout << "Enter two numbers: ";
	cin >> num1 >> num2;

	//initial flag value
	bool flag = false;

	if ((num1 > 0) && (num2 < 0))
	{
		flag = true;
	}

	else if ((num1 == -5) && (num2 > 0))
	{
			flag = true;
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
