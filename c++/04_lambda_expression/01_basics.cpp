/* 
lambda expression is an anonymous function that can be defined and called in place. 
It is a powerful feature in C++ that allows you to create small, inline functions without the need for a separate function definition.
[capture list] (parameters) -> return type { function body }
- capture list: specifies which variables from the surrounding scope should be captured and how they should be captured (by value or by reference)
- parameters: specifies the parameters that the lambda function takes, similar to regular function parameters
- return type: specifies the return type of the lambda function, which can be omitted if the lambda function does not return a value or if the return type can be deduced from the function body
- function body: contains the code that defines the behavior of the lambda function 
There are different ways to capture variables in a lambda function:
- [&] captures all variables from the surrounding scope by reference, allowing the lambda function to modify those variables
- [=] captures all variables from the surrounding scope by value, allowing the lambda function to access those variables but not modify them
- [x] captures the variable x by value, allowing the lambda function to access the value of x but not modify it
- [&x] captures the variable x by reference, allowing the lambda function to access and modify the value of x
*/

#include <iostream>


int main()
{
    int x = 10;
    int y = 20;

    auto lambda_func = [](int x) -> void { // defines a lambda function that takes an integer parameter and returns void
        std::cout << "The value of x is: " << x << std::endl; // prints the value of x to the console
    };
    lambda_func(x); // calls the lambda function with the argument 10, which will print "The value of x is: 10" to the console
    
    auto duplication = [&x , y]() -> void { // defines a lambda function that captures the variable x by reference  and returns void
        x*=2; // multiplies the value of x by 2
        x+=y; // adds the value of y to x
        // cannot modify the original y because it is captured by value, so it is not accessible within the lambda function
    };
    duplication(); // calls the lambda function, which will modify the value of x to 20
    std::cout << "The value of x after duplication is: " << x << std::endl; // prints the value of x after duplication, which will still be 10 because the
    return 0;
}