//sum of 2 numbers

#include <iostream>


int main()
{
    int num1, num2, sum, multiply;

    std::cout << "enter 2 numbers: ";
    std::cin >> num1 >> num2;

    sum = num1 + num2;
    multiply = num1 * num2;

    std::cout << "sum of " << num1 << " + " << num2 << " = " << sum <<std::endl;
    std::cout << "multiply of " << num1 << " * " << num2 << " = " << multiply <<std::endl;

    return 0;
}