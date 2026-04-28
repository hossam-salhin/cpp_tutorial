/* 
Iterators in C++
An iterator is an object that allows you to traverse through a container, such as an array or a vector, and access its elements.
Iterators provide a way to access the elements of a container without exposing the underlying implementation of the container. 
They are a fundamental part of the C++ Standard Library and are used extensively in algorithms and data structures.
Iterators can be thought of as pointers that can be incremented or decremented to move through the elements of a container. 
They provide a consistent interface for accessing elements, regardless of the type of container being used. 
The most common types of iterators in C++ are:
- Input iterators: allow you to read elements from a container
- Output iterators: allow you to write elements to a container
- Forward iterators: allow you to read and write elements in a container, and can be incremented to move forward through the container
- Bidirectional iterators: allow you to read and write elements in a container, and can be incremented to move forward and decremented to move backward through the container
- Random access iterators: allow you to read and write elements in a container, and can be incremented, decremented, and accessed using the subscript operator to move through the container in any order
In C++, you can use iterators with various container types, such as arrays, vectors, lists, and maps. 
The C++ Standard Library provides a set of algorithms that can be used with iterators to perform common operations, such as sorting, searching, and transforming elements in a container. 
Overall, iterators are a powerful and flexible tool in C++ that allow you to work with containers in a consistent and efficient way, without needing to worry about the 
*/

#include <iostream>
#include <array>


int main()
{
    std::array<int, 5> nums; // creates an array of integers with 5 elements using std::array
    std::array<int, 5>::iterator it; // declares an iterator for the array of integers = (auto it = nums.begin();)

    for(it = nums.begin(); it != nums.end(); ++it) // iterates through the array using the iterator, starting from the beginning of the array and ending at the end of the array
    {
        std::cout << "Enter a number: ";
        std::cin >> *it; // takes input from the user and stores it in the current position of the iterator, which corresponds to an element in the array
    }

    for(it = nums.begin(); it != nums.end(); ++it) // iterates through the array again using the iterator, starting from the beginning of the array and ending at the end of the array
    {
        *it *= 2;    
    }

    for(it = nums.begin(); it != nums.end(); ++it) // iterates through the array again using the iterator, starting from the beginning of the array and ending at the end of the array
    {
        std::cout << "out: " << *it << std::endl; // prints the value of the current position of the iterator, which corresponds to an element in the array
    }

    return 0;
}