#include <iostream>

int additionMachine(int number1, int number2) {
	return (number1 + number2);
}

int substractionMachine(int number1, int number2) {
	return (number1 - number2);
}

int multiplicationMachine(int number1, int number2) {
	return (number1 * number2);
}

float divisionMachine(int number1, int number2) {
	return (number1 / number2);
}
int main() {
	int firstNum;
	int secondNum;

	int resultAdd;
	int resultSub;
	int resultMulti;
	float resultDiv;

	std::cout << "Please enter the first number: " << std::endl;
	std::cin >> firstNum;
	std::cout << "Please enter the second number: " << std::endl; 
	std::cin >> secondNum;

	resultAdd = additionMachine(firstNum, secondNum);
	resultSub = substractionMachine(firstNum, secondNum);
	resultMulti = multiplicationMachine(firstNum, secondNum);
	resultDiv = divisionMachine(firstNum, secondNum);

	std::cout << "Adding the first number: " << firstNum << " and the second number: " << secondNum << " gives us: " << resultAdd << std::endl;


}