#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main() {
    // seed RNG
    srand(time(0));

    // variables
    const char SYMBOL = '-';
    const char SPACE = ' ';
    const int LINE = 50;
    const int WIDTH = 20;
    //defining separate variables
    string fullName;
    string item1, item2, item3;
    double price1, price2, price3;

    // greeting
    cout << "Welcome to my store!\n";

    // TODO: gather input
    cout << "Please tell me your name: " << endl;
    getline(cin,fullName);

    cout << "Enter the first item in your cart: " << endl;
    getline(cin,item1);

    cout << "What was the price on that: " << endl;
    cin >> price1;

    cout << "Enter the second item in your cart: " << endl;
    cin.ignore();
    getline(cin,item2);

    cout << "What as the price on that: " << endl;
    cin >> price2;

    cout << "Enter the third item in your cart: " << endl;
    cin.ignore();
    getline(cin,item3);

    cout << "What was the price on that: " << endl;
    cin >> price3;

    // TODO: calculations
    // Defining constant variables
    const int MIN_VAL = 5, MAX_VAL = 20;

    // Separated tax variables to visualize the math better
    float subTotal = price1 + price2 + price3;
    float randTax = MIN_VAL + rand()% (MAX_VAL - MIN_VAL +1);
    float calculatedTax = (randTax / 100);
    float total = subTotal + (subTotal * calculatedTax);

    // TODO: display receipt
    // receipt header graphic

    cout << setfill(SYMBOL) << setw(LINE) << "" << endl;
    cout << setfill(SPACE) << setw(WIDTH) << "" <<
    		setw(WIDTH) << "Andy's General Goods" << endl;
    cout << setfill(SYMBOL) << setw(LINE) << "" << endl;
    cout << left << setfill(SPACE);
    cout << setw(WIDTH) << "|Customer: " << setw(WIDTH) << "" << fullName << endl;
    cout << setfill(SYMBOL) << setw(LINE) << "" << endl;
    // receipt information

    cout << left;
    cout << setfill(SPACE) << setprecision(2) << fixed;
    cout << setw(WIDTH) << "Item #1: " << setw(WIDTH) << "" << item1  << endl;
    cout << setw(WIDTH) << "Price $: " << setw(WIDTH) << "" << price1 << endl << endl;
	cout << setw(WIDTH) << "Item #2: " << setw(WIDTH) << "" << item2  << endl;
	cout << setw(WIDTH) << "Price $: " << setw(WIDTH) << "" << price2 << endl << endl;
	cout << setw(WIDTH) << "Item #3: " << setw(WIDTH) << "" << item3 << endl;
	cout << setw(WIDTH) << "Price $: " << setw(WIDTH) << "" << price3 << endl;
	// transaction portion of receipt

	cout << setfill(SYMBOL) << setw(LINE) << "" << endl;
	cout << setfill(SPACE);
	cout << setw(WIDTH) << "Sub total $: " << setw(WIDTH) << "" << subTotal  << endl;
	cout << setw(WIDTH) << "Tax: " << setw(WIDTH) << "" << calculatedTax * 100
		 << setw(WIDTH) << "%" << endl;
	cout << setfill(SYMBOL) << setw(LINE) << "" << endl;
	cout << setfill(SPACE);
	cout << setw(WIDTH) << "Total $: " << setw(WIDTH) << "" << total << endl;
	cout << setfill(SYMBOL) << setw(LINE) << "" << endl;

    // terminate
    return 0;
}
