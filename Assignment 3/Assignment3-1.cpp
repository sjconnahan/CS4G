#include <iostream>
int PosNegZero(int myNumber) {
	if (myNumber > 0) {
		std::cout << "Positive!" << std::endl;
	}
	else if (myNumber < 0) {
		std::cout << "Negative!" << std::endl;
	}
	else {
		std::cout << "Zero!" << std::endl;
	}
	return 0;
}
int main() {
	int startingNumber;
	std::cout << "Please enter any integer:" << std::endl;
	std::cin >> startingNumber;
	PosNegZero(startingNumber);
	return 0;
}