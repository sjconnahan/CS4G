#include <iostream>
#include <string>

int palindrome(std::string string1) {
	std::string solString;
	for (int i = (string1.size()-1); i >= 0; i--) {
		solString = solString + string1[i];
	}
	if (solString == string1) {
		std::cout << "Palindrome" << std::endl;
	}
	else {
		std::cout << "Not a Palindrome" << std::endl;
	}
	return 0;
}

int main() {
	std::string enteredString;
	std::cout << "Please enter a word: " << std::endl;
	std::cin >> enteredString;
	palindrome(enteredString);
	return 0;
}