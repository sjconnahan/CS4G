#include <iostream>
#include <string>
#include <vector>

int wordCounter(std::string string1) {
	std::string createdString;
	std::vector<std::string> newStrings;
	for (int i = 0; i <= (string1.size() - 1); i++) {
		if (i == (string1.size() - 1)) {
			newStrings.push_back(createdString);
			std::cout << newStrings.size() << std::endl;
		}
		else if (string1[i] != ' ') {
			createdString += string1[i];
			std::cout << createdString << std::endl;
			continue;
		}
		else {
			newStrings.push_back(createdString);
			std::cout << newStrings.size() << std::endl;
			createdString.clear();
		}
	}
	return newStrings.size();
}

int main() {
	std::string enteredString;
	int returnedValue;
	std::cout << "Please enter a sentence: " << std::endl;
	std::getline(std::cin, enteredString);
	returnedValue = wordCounter(enteredString);
	std::cout << "The number of words in the sentence is: " << returnedValue << std::endl;
	return 0;
}