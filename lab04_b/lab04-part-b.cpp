#include <iostream>

using namespace std;

int main()
{
    // variables
    const unsigned NUM_GAMES = 5;
    unsigned score1 = 0,
             score2 = 0,
             score3 = 0,
             score4 = 0,
             score5 = 0;

    // TODO: gather input
    cout << "Enter the score of the previous 5 games: ";
    cin >> score1 >> score2 >> score3 >> score4 >> score5;
    // TODO: calculate average
    cout << "The average score is " << static_cast<float>(score1 + score2 + score3 + score4 + score5) / NUM_GAMES << endl;
    // TODO: update all scores
    score1 += 4;
    score2 -= 6;
	score3 *= 2;
	score4 /= 3;
	score5 %= 8;
    // TODO: recalculate average
	cout << "The updated average is " << static_cast<float>(score1 + score2 + score3 + score4 + score5) / NUM_GAMES << endl;
    // terminate
    return 0;
}
