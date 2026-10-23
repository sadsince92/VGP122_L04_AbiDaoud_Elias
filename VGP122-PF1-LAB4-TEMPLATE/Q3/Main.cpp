/* Write a program to count the number of vowels and consonants in a character array, using
pointers. */

#include <iostream>

int main() {
    char letters[20];
    int vowels = 0;
    int consonants = 0;

    std::cout << "Enter a word between 1 and 20 characters: ";
    std::cin >> letters;

    char* charPtr = &letters[0];

    for (int i = 0; *(charPtr + i) != '\0'; i++) {
        char letter = *(charPtr + i);

        if (letter == 'a' || letter == 'A') {
            vowels++;
        }
		else if (letter == 'e' || letter == 'E') {
			vowels++;
        }
		else if (letter == 'i' || letter == 'I') {
			vowels++;
		}
		else if (letter == 'o' || letter == 'O') {
			vowels++;
		}
		else if (letter == 'u' || letter == 'U') {
			vowels++;
		}
        else
            consonants++;
    }

    std::cout << "Number of vowels: " << vowels << std::endl;
    std::cout << "Number of consonants: " << consonants << std::endl;

    return 0;
}