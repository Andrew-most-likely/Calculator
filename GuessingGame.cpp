#include <iostream>
#include <cstdlib>



int userInput()
{
	std::cout << "Enter an integer: ";
	int userGuess{};
	std::cin >> userGuess;
	return userGuess;
}

int guessMain()
{
	int i = 1;
	while (i != 2)
	{
		i++;
		int randomNum{ rand() % 11 };
		int guess{ userInput() };

		if (guess == randomNum)
		{
			std::cout << "Great job you win";
			return 0;
		}
		else
		{
			i--;
		}
	}
	return 0;
}