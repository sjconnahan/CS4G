#include <stdio.h>

int calcFactorial(int number) {
	int startNum = 1;
	for (int i = 1; i <= number; i++) {
		startNum = startNum * i; 
	}
	printf("%d", startNum);
	return 0;
}

int main() {
	int enteredNum;
	printf("Please enter a positive integer: ");
	scanf_s("%d", &enteredNum);

	calcFactorial(enteredNum);
	return 0;
}