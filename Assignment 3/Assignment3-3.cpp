#include <iostream>

int multiplicationTable(int number) {
	int result;
	for (int i = 1; i <= 10; i++) {
		result = i * number;
		std::cout << result << std::endl;
	}
	return 0;
}

int main() {
	int initialNum;
	std::cout << "Please enter an integer: " << std::endl;
	std::cin >> initialNum;

	multiplicationTable(initialNum);
	return 0;
}