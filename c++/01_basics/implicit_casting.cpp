/*
In C++, implicit type conversion, also known as type coercion, 
occurs when the compiler automatically converts one data type to another during an operation. 
This can happen when you perform operations between different data types, 
such as adding an integer and a character or dividing a double by an integer.
*/

#include <iostream>


int main()
{
    int x = 10; //int size is typically 4 bytes
    char c = 'A'; //char size is typically 1 byte
    double d = 3.14; //double size is typically 8 bytes

    x += c;  // when adding an int and a char, the char is promoted to an int before the addition takes place. 
                    // the ASCII value of 'A' is 65, so the expression x + c is evaluated as 10 + 65, resulting in 75. 
                    // this is an example of implicit type conversion, where the compiler automatically converts the char to an int to perform the addition.
   
    d += x; // when dividing a double by an int, the int is promoted to a double before the division takes place. 
                    // the expression x / 2 is evaluated as 75 / 2, which results in 37.5. 
                    // this is another example of implicit type conversion, where the compiler automatically converts the int to a double to perform the division.
   std::cout << "Int: " << x << std::endl;
   std::cout << "Double: " << d << std::endl;

    return 0;
}