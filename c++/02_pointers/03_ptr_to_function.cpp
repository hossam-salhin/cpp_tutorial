/*
pointer to function is a variable that stores the address of a function.
it can be used to call the function indirectly, which allows for more flexible and dynamic code.
*/

#include <iostream>

void printInt(int x) // function that takes an integer as a parameter and prints it
{
    std::cout << "The value of x is: " << x << std::endl;
}

void callFunction(void (*callback)(int), int value) // function that takes a pointer to a function and an integer value as parameters, and calls the function with the given value
{
    callback(value); // calls the function pointed to by callback with the argument value
}

int main()
{
    void (*functionPtr)(int) = &printInt; // declares a pointer to a function that takes an int as a parameter and returns void, and initializes it to point to the printInt function
    functionPtr(42); // calls the function pointed to by functionPtr with the argument 42, which will print "The value of x is: 42" to the console
    
    callFunction(&printInt, 20); // another way to call the function, using the callFunction with printInt as the callback function and 20 as the value to be printed
    return 0;
}
