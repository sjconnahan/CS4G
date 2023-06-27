#include <stdio.h>
int MaximumCalc(int number1, int number2) {
	if (number1 > number2) {
		printf("%d", number1);
	}
	else if (number2 > number1) {
		printf("%d", number2);
	}
	else {
		printf("%d", number1);
		printf("\nThe numbers you entered are the same!");
	}
	return 0;
}
int main() {
	int firstNum;
	int secondNum;
	printf("Please enter the first integer: "); 
	scanf_s("%d", &firstNum); 
	printf("Please enter the second integer: ");
	scanf_s("%d", &secondNum);
	MaximumCalc(firstNum, secondNum);
	return 0;
}