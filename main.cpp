#include "calculator.h"

int main() 
{
    Calculator calc;
    BinaryConverter converter;
    InputHandler input;
    Menu menu;

    char choice;
    double a, b;
    
    do 
    {
        menu.display();
        choice = menu.getChoice();
        system("cls");

        switch (choice) 
        {
            case '1':
                std::cout << "Enter first number: ";
                a = input.getValidatedNumber();
                std::cout << "Enter second number: ";
                b = input.getValidatedNumber();
                std::cout << "Result: " << calc.sum(a, b) << std::endl;
                break;
                
            case '2':
                std::cout << "Enter first number: ";
                a = input.getValidatedNumber();
                std::cout << "Enter second number: ";
                b = input.getValidatedNumber();
                std::cout << "Result: " << calc.subtract(a, b) << std::endl;
                break;
                
            case '3':
                std::cout << "Enter first number: ";
                a = input.getValidatedNumber();
                std::cout << "Enter second number: ";
                b = input.getValidatedNumber();
                std::cout << "Result: " << calc.multiply(a, b) << std::endl;
                break;
                
            case '4':
                std::cout << "Enter first number: ";
                a = input.getValidatedNumber();
                std::cout << "Enter second number: ";
                b = input.getValidatedNumber();
                std::cout << "Result: " << calc.divide(a, b) << std::endl;
                break;
                
            case '5':
                std::cout << "Enter binary number: ";
                std::cout << "Decimal: " << converter.binaryToDecimal(input.getValidatedBinary()) << std::endl;
                break;

            case '6':
                std::cout << "Exiting the program." << std::endl;
                break;

            default:
                std::cout << "Invalid choice! Please try again." << std::endl;
                break;
        }

    } 
    while (choice != '6');

    return 0;
}