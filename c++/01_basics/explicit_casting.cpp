/*
In C++, explicit type casting, also known as type conversion, occurs when the programmer manually converts one data type to another using a cast operator. 
This is done when you want to perform a specific type conversion that the compiler would not automatically do, or when you want to make the conversion more explicit in your code for readability or to avoid unintended consequences of implicit conversions. 
Explicit type casting can be done using C-style casts, function-style casts, or the newer C++-style casts (static_cast, dynamic_cast, const_cast, and reinterpret_cast).
*/

#include <iostream>

int main()
{
    double d =3.14; // double size is typically 8 bytes
    int x = (int)d + 5; // C-style cast to convert the double d to an int before adding 5. 
                    // the fractional part of the double (0.14) is truncated, resulting in 3, and then 5 is added to it, giving a final value of 8 for x.

    int y = static_cast<int>(d) + 10; // C++-style cast using static_cast to convert the double d to an int before adding 10. 
                    // similar to the previous example, the fractional part of the double is truncated, resulting in 3, and then 10 is added to it, giving a final value of 13 for y.

    std::cout << "Value of x: " << x << std::endl; // prints the value of x, which is 8
    std::cout << "Value of y: " << y << std::endl; // prints the value of y, which is 13   

    return 0;
}
