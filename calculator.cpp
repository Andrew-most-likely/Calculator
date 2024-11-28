#include <iostream>
#include "calculatorIO.h"

int main()
{
	int i = 1;
		while (i != 2)
		{
			i = i++;
			double num1{ numberInput() };
			char operand{ calculationType() };
			double num2{ numberInput() };
			eqOutput(operand, num1, num2);
			std::cout << "Would you like to exit [y/n]: \n";
			char exit{};
			std::cin >> exit;

			if (exit == 'y')
			{
				return 0;
			}
			else
			{
				i = i--;
			}
		};
	return 0;
}