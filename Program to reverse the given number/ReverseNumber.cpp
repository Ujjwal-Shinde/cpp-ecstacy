#include <iostream>

// Function to reverse a given integer
int reverseNumber(int number) {
    int reversedNumber = 0;

    while (number != 0) {
        int digit = number % 10;
        reversedNumber = reversedNumber * 10 + digit;
        number /= 10;
    }

    return reversedNumber;
}

int main() {
    int userInput;

    // Get user input
    std::cout << "Enter an integer: ";
    std::cin >> userInput;

    // Call the function and print the result
    int result = reverseNumber(userInput);
    std::cout << "Reversed number: " << result << std::endl;

    return 0;
}
