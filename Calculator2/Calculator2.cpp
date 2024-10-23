#include "MultiplyAndAdd.h"
#include "powermodulus.h"
#include "subsum.h"
#include <iostream>

using namespace std;

int main() {
	int num1 = 1, num2 = 2, result = 0, choice;
	cout << "Welcome to the program, choose a number: \n 1-Sum \n 2- Sub \n 3-Mul \n 4- Div \n 5-Power \n 6-Mod \n ";
	cin >> choice;
	cout << "Please enter your numbers: ";
	cin >>num1 >> num2;
	
	switch (choice)
	{
	case 1: {
		cout<<sum(num1, num2);
		break;
	}
	case 2: {
		cout << sub(num1, num2);

		break;
	}
	case 3: {
		cout << Multiply(num1, num2);

		break;
	}
	case 4: {
		cout << Divide(num1, num2);

		break;
	}
	case 5: {
		cout << power(num1, num2);

		break;
	}
	case 6: {
		cout << modulus(num1, num2);

		break;
	}
	default:
		cout << "Please enter a valid option.";
		break;
	}
	main();




	return 0;
}
