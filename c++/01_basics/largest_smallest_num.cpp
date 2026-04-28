// largest and smallest number of 3 integers


#include <iostream>

int main()
{
    int num1, num2 , num3; // three integers
    std::cout << "Enter three integers: ";
    std::cin >> num1 >> num2 >> num3;
    int largest = num1; // assume num1 is largest
    int smallest = num1; // assume num1 is smallest 
    // check if num2 is larger than largest
    if (num2 > largest)
    {
        largest = num2;
    }
    // check if num3 is larger than largest
    if (num3 > largest)
    {
        largest = num3;
    }
    // check if num2 is smaller than smallest
    if (num2 < smallest)
    {
        smallest = num2;
    }
    // check if num3 is smaller than smallest
    if (num3 < smallest)
    {
        smallest = num3;
    }

    std::cout << "The largest number is: " << largest << std::endl;
    std::cout << "The smallest number is: " << smallest << std::endl;

    return 0;
}