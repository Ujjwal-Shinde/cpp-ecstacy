#include <iostream>

int main() {
    int userInput;

    // Taking input from the user
    std::cout << "Enter a non-negative integer: ";
    std::cin >> userInput;

    // Checking if the number is non-negative
    if (userInput < 0) {
        std::cout << "Please enter a non-negative integer." << std::endl;
    } else {
        // Calculating the factorial using a for loop
        int result = 1;
        for (int i = 1; i <= userInput; i++) {
            result *= i;
        }

        // Printing the result
        std::cout << "Factorial of " << userInput << " is: " << result << std::endl;
    }

    return 0;
}