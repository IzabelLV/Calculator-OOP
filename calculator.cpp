#include "calculator.h"

double Calculator::sum(double a, double b)
{
    return a + b;
}

double Calculator::subtract(double a, double b)
{
    return a - b;
}

double Calculator::multiply(double a, double b)
{
    return a * b;
}

double Calculator::divide(double a, double b)
{
    if (b == 0)
    {
        std::cout << "You cannot divide by zero.\n";
        return 0;
    }
    return a / b;
}

int BinaryConverter::binaryToDecimal(const std::string& binary)
{
    return std::stoi(binary, 0, 2);
}

double InputHandler::getValidatedNumber()
{
    double number;
    while (!(std::cin >> number))
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Please enter a valid number!\n";
    }
    return number;
}

std::string InputHandler::getValidatedBinary()
{
    std::string binary;
    while(true)
    {
        std::cin >> binary;
        bool isValid = true;
        for (char c : binary)
        {
            if (c != '0' && c != '1')
            {
                isValid = false;
                break;
            }
        }
        if (isValid)
        {
            return binary;
        }
        std::cout << "Invalid binary number!\n";
    }
}


void Menu::display() {
    std::cout << "\nWhat do you want to do?\n";
    std::cout << "1) Sum\n";
    std::cout << "2) Subtract\n";
    std::cout << "3) Multiply\n";
    std::cout << "4) Divide\n";
    std::cout << "5) Convert from binary to decimal\n";
    std::cout << "6) Quit\n";
}

char Menu::getChoice()
{
    char choice;
    std::cin >> choice;
    return choice;
}