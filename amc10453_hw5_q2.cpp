

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int main()
{
	
	srand(time(0));

	int number = (rand() % 100) + 1;
	int lowerNumber = 1, higherNumber = 100;
	int guesses, guessesLeft = 5;

	cout << "I thought of a number between 1 and 100! Try to guess it." << endl;
	
	
	
	while (guessesLeft > 0)
	{


		cout << "Range: [" << lowerNumber << ", " << higherNumber << " ], Number of guesses left: " << guessesLeft << endl;
		cout << "Your guess: ";
		cin >> guesses;




		if (guesses == number)
		{
			cout << "Congrats! You guessed my number in " << (6 - guessesLeft) << " guesses." << endl;
			return 0;
		}

		guessesLeft--;


		if (guesses < number)
		{

			cout << "Wrong! My number is bigger." << endl;
			lowerNumber = guesses + 1;
		}
		else
		{
			cout << "Wrong! My number is smaller." << endl;
			higherNumber = guesses - 1;
		}

	}


	cout << "Out of guesses! My number is " << number << endl;


    return 0;
}

