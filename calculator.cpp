#include <iostream>
#include"subsum.hpp"
using namespace std

int main() {
	int num1, num2, result,choice;
	cout << "Welcome to the program, choose a number: \n 1-Sum \n 2- Sub \n 3-Mul \n 4- Div \n 5-Power \n 6-Mod ";
	cin >> choice;
	cout << "please enter two numbers";
	cin >> num1>>num2;
	switch (choice)
	{
	case 1: {
		sum(num1,num2);
		break;
	}
	case 2: {
		sub(num1, num2);
		break;
	}
	case 3: {

		break;
	}
	case 4: {
		break;
	}
	case 5: {
		break;
	}
	case 6: {
		break;
	}
	default:
		cout << "Please enter a valid option."
		break;
	}



	return 0;
}