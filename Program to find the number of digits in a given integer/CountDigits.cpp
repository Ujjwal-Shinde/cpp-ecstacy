#include <iostream>

int countDigits(int number)
{
    int digitCount = 0;

    // Handle the case of a negative number
    if (number < 0)
    {
        number = -number;
    }
    // Handle the 0 as a input
    if (number == 0)
    {
        return 1;
    }
    else
    {
        // Count digits using a loop
        while (number != 0)
        {
            number /= 10;
            digitCount++;
        }
        return digitCount;
    }
}

int main()
{
    int userInput;

    // Get user input
    std::cout << "Enter an integer: ";
    std::cin >> userInput;

    // Call the function and print the result
    int result = countDigits(userInput);
    std::cout << "Number of digits: " << result << std::endl;

    return 0;
}
