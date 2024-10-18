#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
    // seed the random number generator
    srand(time(0));

    // declare and initialize a variable for `setw`
    const int WIDTH = 8;

    // TODO: declare and initialize 3 `int` variables to random values
    // in the range 55 to 270 (inclusive)
    // minVal +rand() % (maxVal - minVal +1)
    int numA = 55 + rand()% (270 - 15 +1);
    int numB = 55 + rand()% (270 - 15 +1);
    int numC = 55 + rand()% (270 - 15 +1);

    // TODO: manipulate the output stream to make it aligned to the left,
    // have precision of 3, and fixed
    cout << left << setprecision(3) << fixed;

    // TODO: display their values
    cout << setw(WIDTH)<< numA << setw(WIDTH) << numB << setw(WIDTH) << numC << endl;
    // TODO: display the sine of each variable
    cout << setw(WIDTH)<< sin(numA) << setw(WIDTH) << sin(numB) << setw(WIDTH) << sin(numC) << endl;
    // TODO: display the cosine of each variable
    cout << setw(WIDTH)<< cos(numA) << setw(WIDTH) << cos(numB) << setw(WIDTH) << cos(numC) << endl;
    // TODO: display the square root of each variable
    cout << setw(WIDTH)<< sqrt(numA) << setw(WIDTH) << sqrt(numB) << setw(WIDTH) << sqrt(numC) << endl;
    // TODO: display the log10 of each variable
    cout << setw(WIDTH) << log10(numA) << setw(WIDTH) << log10(numB) << setw(WIDTH) << log10(numC) << endl;


    // terminate
    return 0;
}
