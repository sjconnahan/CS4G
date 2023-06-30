#include <iostream>
#include <vector>
#include <string>

char randLowerCase() {
	int lowerCase = rand() % 26;
	char convertedCase = 'a' + lowerCase;
	return convertedCase;
}

char randUpperCase() {
	int upperCase = rand() % 26;
	char convertedCase = toupper(('a' + upperCase));
	return convertedCase;
}

int randDigit() {
	int randNum = rand() % 9;
	return randNum;
}

char randSymbol() {
	std::vector<char> symbols = { '+', '-', '=', '<', '>', '?', '/', '.', ']', '[', '}', '{', '*' };
	int sizeSym = symbols.size();
	int symSelect = rand() % sizeSym;
	return symbols[symSelect];

}
int main() {
	char upperChar;
	char lowerChar;
	int randDig;
	char randSym;
	std::string randPass;
	std::cout << "Generating your random password..." << std::endl;
	upperChar = randUpperCase();
	lowerChar = randLowerCase();
	randDig = randDigit();
	randSym = randSymbol();

	randPass += upperChar;
	randPass += lowerChar;
	randPass += std::to_string(randDig);
	randPass += randSym;

	std::cout << "Your random password is: " << randPass << std::endl;

	return 0;
}