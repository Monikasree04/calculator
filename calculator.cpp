#include <iostream>

int main() {
    int firstnumber;
    int secondnumber;
    char operation;
    char quit;

    do {
        std::cout << "SIMPLE CALCULATOR" << "\n";
        std::cout << "Enter the first number: ";
        std::cin >> firstnumber;

        std::cout << "Enter the second number: ";
        std::cin >> secondnumber;

        std::cout << "Choose your operation (+, -, *, /): ";
        std::cin >> operation;

        if (operation == '+') {
            std::cout << "Addition result: " << firstnumber + secondnumber << "\n";
        } else if (operation == '-') {
            std::cout << "Subtraction result: " << firstnumber - secondnumber << "\n";
        } else if (operation == '*') {
            std::cout << "Multiplication result: " << firstnumber * secondnumber << "\n";
        } else if (operation == '/') {
            if (secondnumber != 0) {
                std::cout << "Division result: " << static_cast<double>(firstnumber) / secondnumber << "\n";
            } else {
                std::cout << "Error: Division by zero is not allowed!" << "\n";
            }
        } else {
            std::cout << "Error: Invalid operation!" << "\n";
        }

    std::cout << "Thank you for using the calculator." << "\n";
    std::cout << "Do you want to quit? (Enter 'q' to quit, any other key to continue)"<<"\n";
    std::cin >> quit;
      
    } while (quit != 'q' );
    std::cout<<"GOOD BYE!"<<"\n";

    return 0;
}