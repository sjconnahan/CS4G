#include <iostream>

int fibonacci(int maxNum) {
	int firstNum = 1;
	int secNum = 1; 
	int twoSum = 0;
	std::cout << firstNum << std::endl;
	std::cout << secNum << std::endl;
	
	for (int i = 0; twoSum < maxNum; i++) {
		twoSum = firstNum + secNum;
		if (twoSum > maxNum) {
			break;
		}
		else {
			std::cout << twoSum << std::endl;
			firstNum = secNum;
			secNum = twoSum;
		}
	}
	return 0;
}

int main() {
	int enteredNum;
	std::cout << "Please enter an integer: " << std::endl;
	std::cin >> enteredNum;
	fibonacci(enteredNum);
	return 0;
}