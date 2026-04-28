/* 
Pointer and Variables - 
This code demonstrates the use of pointers to store the addresses of variables of different types (int, char, double) 
and prints the size of these types and their corresponding pointers in bytes.
*/

#include <iostream>



int main()
{
    int num = 10;
    char letter = 'a';
    double  pi = 3.14;

    int* ptr_num = &num; // a pointer to an integer variable, initialized with the address of num
    char* ptr_letter = &letter; // a pointer to a char variable, initialized with the address of letter

    double* ptr_double = &pi; // a pointer to a double variable, initialized with the address of pi

    std::cout << "size of int: " <<sizeof(int) << " bytes" << std::endl; // prints the size of an int type in bytes
    std::cout << "size of char: " <<sizeof(char) << " bytes" << std::endl; // prints the size of a char type in bytes
    std::cout << "size of double: " <<sizeof(double) << " bytes" << std::endl; // prints the size of a double type in bytes

    std::cout << "size of pointer to int: " <<sizeof(ptr_num) << " bytes" << std::endl; // prints the size of a pointer to an int type in bytes
    std::cout << "size of pointer to char: " <<sizeof(ptr_letter) << " bytes" << std::endl; // prints the size of a pointer to a char type in bytes
    std::cout << "size of pointer to double: " <<sizeof(ptr_double) << " bytes" << std::endl << std::endl; // prints the size of a pointer to a double type in bytes
    
    std::cout << "value of num: " << num << " and address of num: " << ptr_num << std::endl; // prints the value of num and its address in memory
    std::cout << "value of letter: " << letter << " and address of letter: " << ptr_letter << std::endl; // prints the value of letter and its address in memory
    std::cout << "value of pi: " << pi << " and address of pi: " << ptr_double << std::endl; // prints the value of pi and its address in memory
    return 0;
}