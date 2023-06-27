#include <stdio.h>
#include <math.h>

int howBig(int startNum) {
	long multiplier = 0;
	for (int i = 1; multiplier < startNum; i++) {
		multiplier = pow(10, i);
		if (multiplier > startNum) {
			return i;
		}
		else {
			continue;
		}
	}
}

long getDigits(int multiplier, int startNum) {
	long remain = 0;
	long left;
	long mod;
	for (multiplier; multiplier > 0; multiplier--) {
		int powerOf = pow(10, (multiplier - 1));
		printf("%d\n", powerOf);
		left = startNum % powerOf;
		printf("%d\n", left);
		mod = (startNum - left) / powerOf;
		printf("%d\n", mod);
		startNum = left;
		remain = remain + mod;
		printf("%d\n", remain);
	}
	return remain;
}

int main() {
	int enteredNum;
	int modMultiplier;
	int result;

	printf("Please enter a number: ");
	scanf_s("%d", &enteredNum);

	modMultiplier = howBig(enteredNum);
	result = getDigits(modMultiplier, enteredNum);

	printf("The Sum of the Digits is %d", result);
	return 0;
}