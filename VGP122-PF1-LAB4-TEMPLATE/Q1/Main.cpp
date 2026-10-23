/* Write a program to find the max value of an integer array data set. The program will ask the user
to input the number of data values in the set and each value. The program prints on screen a
pointer that points to the max value. */

#include <iostream>

int main() {
    int n;
	int numbers[100];

	std::cout << "Enter a value between 1 and 100: ";
	std::cin >> n;

	while (n < 1 || n > 100) {
		std::cout << "Invalid input. Enter a number between 1 and 100: ";
		std::cin >> n;
	}
	for (int i = 0; i < n; i++) {
		std::cout << "Enter value " << (i + 1) << ": ";
		std::cin >> numbers[i];
	}

	int* maxPtr = &numbers[0];
	for (int i = 1; i < n; i++) {
		if (numbers[i] > *maxPtr) {
			maxPtr = &numbers[i];
		}
	}
	std::cout << "The maximum value is: " << *maxPtr << std::endl;

	return 0;
}
