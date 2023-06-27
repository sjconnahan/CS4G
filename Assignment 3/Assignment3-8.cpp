#include <iostream>
#include <cstdlib>

int randNumFeedback(int firstGuess) {
	int answer = rand() % 100 + 1;

	while (firstGuess != answer) {
		int newGuess;
		if (firstGuess > answer) {
			std::cout << "Too High! Try again: " << std::endl;
			std::cin >> newGuess;
			firstGuess = newGuess;
			continue;
		}
		else if (firstGuess < answer) {
			std::cout << "Too Low! Try again: " << std::endl;
			std::cin >> newGuess;
			firstGuess = newGuess;
			continue;
		}
	}
	std::cout << "You guessed correctly! Answer: " << firstGuess << std::endl;
	return 0;
}

int main() {
	int guess;
	std::cout << "Please guess a number between 1 and 100: " << std::endl;
	std::cin >> guess;
	randNumFeedback(guess);
	return 0;
}