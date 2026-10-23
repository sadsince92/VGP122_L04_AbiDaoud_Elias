/* Write a program to find the factorial of a given number using pointers. */

#include <iostream>

int main() {
    int n;

    std::cout << "Enter a number: ";
    std::cin >> n;

    int* numPtr = &n;
	long long factorial = 1;
    
    for (int i = 1; i <= *numPtr; i++) {
        factorial *= i;
    }

    std::cout << "The factorial of " << *numPtr << " is: " << factorial << std::endl;

    return 0;
}