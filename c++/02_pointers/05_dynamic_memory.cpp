/* Dynamic Memory Allocation 
    - In C++, you can allocate memory dynamically using the `new` operator, which allows you to create variables and arrays on the heap.
    - When you allocate memory dynamically, you must also deallocate it using the `delete` operator to avoid memory leaks.
    - For single variables, use `delete`, and for arrays, use `delete[]`.
    -there are 3 main problems with dynamic memory allocation:
        1. Memory leaks: If you forget to deallocate memory, it can lead to memory leaks, which can cause your program to consume more and more memory over time.
        2. Dangling pointers: If you deallocate memory but still have a pointer pointing to that memory, it can lead to undefined behavior if you try to access it.
        3. Fragmentation: Over time, as you allocate and deallocate memory, the heap can become fragmented, which can lead to inefficient use of memory and slower performance.
*/

#include <iostream>


int main()
{
    int* p = new int; // allocate memory for an integer on the heap
    *p = 42; // assign a value to the allocated memory
    std::cout << "Value: " << *p << std::endl; // output the value
    delete p; // deallocate memory for the integer


    char* char_ptr = new char('a'); // allocate memory for a char and initialize it
    std::cout << "Character: " << *char_ptr << std::endl; // output the character
    delete char_ptr; // deallocate memory for the char


    int* arr_ptr = new int[5]; // allocate memory for an array of 5 integers on the heap
    for (int i = 0; i < 5; ++i)
    {
        arr_ptr[i] = i + 1; // assign values to the array
    }
    std::cout << "Array values: ";
    for (int i = 0; i < 5; ++i)
    {
        std::cout << arr_ptr[i] << " ";
    }
    std::cout << std::endl;

    delete[] arr_ptr; // deallocate memory for the array

    return 0;
}