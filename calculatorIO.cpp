#include <iostream>

void eqOutput(char operand, double num1, double num2)
{
	switch (operand)
	{
	case '+':
		std::cout << num1 << " + " << num2 << " = " << num1 + num2 << std::endl;
		break;
	case '-':
		std::cout << num1 << " - " << num2 << " = " << num1 - num2 << std::endl;
		break;
	case '*':
		std::cout << num1 << " * " << num2 << " = " << num1 * num2 << std::endl;
		break;
	case '/':
		if (num2 != 0)
		{
			std::cout << num1 << " / " << num2 << " = " << num1 / num2 << std::endl;
			break;
		}
		else
		{
			std::cout << "Division by 0 is not allowed.";
		}
	default:
		std::cout << "Invalid input.";
	}
}
double numberInput()
{
	std::cout << "Enter an integer: ";
	double num{};
	std::cin >> num;
	return num;
}

char calculationType()
{
	std::cout << "Enter an operator: \n  [+, -, /, *] \n";
	char operand{};
	std::cin >> operand;
	return operand;
}
