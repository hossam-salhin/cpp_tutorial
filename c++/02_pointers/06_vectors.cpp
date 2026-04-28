/*
    * This program demonstrates the use of std::vector in C++. It creates two vectors, one empty and one initialized with a specific size and value. It shows how to add and remove elements from the vector, as well as how to check its size and capacity.
    * std::vector is a dynamic array that can grow and shrink in size. It provides various member functions to manage the elements, such as push_back() to add elements, pop_back() to remove the last element, and reserve() to pre-allocate memory for a certain number of elements.
    * The program also includes a helper function printVector() to display the contents of the vector.
*/

#include <iostream>
#include <vector>

void printVector(const std::vector<int>& vec)
{
    for (const auto& element : vec)
    {
        std::cout << element << " ";
    }
    std::cout << std::endl;
}

int main()
{
    std::vector<int> vec1; // create an empty vector of integers
    vec1.reserve(10); // reserve space for 10 elements to avoid multiple reallocations as we add elements
    vec1.push_back(10); // add elements to the vector
    vec1.push_back(20);
    vec1.push_back(30);

    std::cout << "vec1 size: " << vec1.size() << " and capacity: " << vec1.capacity() << std::endl; // output the size and capacity of the vector
    std::cout << "vec1 elements: ";
    printVector(vec1);

    std::vector<int> vec2(5, 100); // create a vector of integers with 5 elements, each initialized to 100
    std::cout << "vec2 initial size: " << vec2.size() << " and capacity: " << vec2.capacity() << std::endl; // output the size and capacity of
    std::cout << "vec2 initial elements: ";
    printVector(vec2); // output the initial elements of the vector

    vec2.push_back(200); // add an element to the vector
    std::cout << "vec2 size after push_back: " << vec2.size() << " and capacity: " << vec2.capacity() << std::endl; // output the size and capacity of the vector after adding an element
    std::cout << "vec2 elements after push_back: ";
    printVector(vec2); // output the elements of the vector after adding an element
    
    vec2.pop_back(); // remove the last element from the vector
    std::cout << "vec2 size after pop_back: " << vec2.size() << " and capacity: " << vec2.capacity() << std::endl; // output the size and capacity of the vector after removing an element
    std::cout << "vec2 elements after pop_back: ";
    printVector(vec2); // output the elements of the vector after removing an element


    return 0;
}