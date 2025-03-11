#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <iostream>
#include <string>


class Calculator
{
    public:
    double sum(double a, double b);
    double subtract(double a, double b);
    double multiply(double a, double b);
    double divide(double a, double b);
};

class BinaryConverter
{
    public:
    int binaryToDecimal(const std::string& binary);
};

class InputHandler
{
    public:
    double getValidatedNumber();
    std::string getValidatedBinary();
};

class Menu
{
    public:
    void display();
    char getChoice();
};


#endif
