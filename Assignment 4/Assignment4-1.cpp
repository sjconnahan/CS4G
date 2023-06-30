#include <iostream>
#include <string>

int vowelCounter(std::string string1) {
	int counter = 0;
	for (int i = 0; i < string1.size(); i++) {
		if (string1[i] == 'a' || string1[i] == 'e' || string1[i] == 'i' || string1[i] == 'o' || string1[i] == 'u' || string1[i] == 'A' 
			|| string1[i] == 'E' || string1[i] == 'I' || string1[i] == 'O' || string1[i] == 'U'){
			counter += 1;
		}
	}
	if (counter == 0) {
		for (int i = 0; i < string1.size(); i++) {
			if (string1[i] == 'y' || string1[i] == 'Y') {
				counter += 1;
			}
		}
	}
	return counter;
}

int main() {
	std::string enteredString;
	int result;
	std::cout << "Please enter a word: " << std::endl;
	std::cin >> enteredString;
	result = vowelCounter(enteredString);
	std::cout << "The total number of vowels in " << enteredString << " is " << result << std::endl;
	return 0; 
}