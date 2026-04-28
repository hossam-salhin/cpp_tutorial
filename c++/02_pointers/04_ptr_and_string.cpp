#include <iostream>
#include <cstring>


void printStringInfo(const char* str)  // function to print each character of a string along with its index until the null terminator is reached
{
    size_t i = 0;
    while(str[i] != '\0')  // loop continues until the null terminator is encountered, which indicates the end of the string
    {
        std::cout << "character at index "<< i << " is: " << str[i] <<std::endl;
        i++;
    }
}
int main()
{
    const char* name = "Robotics Engineer"; // a pointer to a string literal, which is stored in read-only memory and cannot be modified. 
                                     // last character is null terminator '\0' which indicates the end of the string
                                     // the size of the string literal "Robotics Engineer" is 18 characters plus the null terminator, making it 19 bytes in total
                                     // must be declared as const char* to prevent modification of the string literal, which would lead to undefined behavior
    
    
    std::cout << "pointer value (address of string literal): " << name << std::endl; // prints the pointer value, which is the address of the first character of the string literal in memory
    std::cout << "size of string literal: " <<strlen(name) << " characters" << std::endl; // prints the length of the string literal, which is 18 characters (excluding the null terminator)
    
    std::cout << "first character of the string literal: " << *name << std::endl; // prints the first character of the string literal, which is 'R'
    std::cout<< "size of string literal: " <<sizeof(name) << " bytes" << std::endl << std::endl; // prints the size of the pointer to the string literal, which is typically 8 bytes on a 64-bit system, regardless of the length of the string literal itself
    printStringInfo(name); // calls the function to print each character of the string along with its index

    return 0;
}