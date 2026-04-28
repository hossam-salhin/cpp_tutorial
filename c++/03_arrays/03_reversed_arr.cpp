#include <iostream>
#include <array>

namespace arrayOperations
{
    void reverseArray(std::array<int, 5> &arr) // defines a function that takes an array of integers as a reference parameter and reverses the order of the elements in the array
    {
        // iterates through the array using two iterators, 
        // one starting from the beginning of the array and the other starting from the end of the array, 
        // and continues until the two iterators meet in the middle of the array
        for(auto lit = arr.begin(), rit = arr.end() -1 ;rit > lit; ++lit, --rit) 
        {
            std::swap(*lit, *rit); // swaps the values at the positions pointed to by the two iterators, effectively reversing the order of the elements in the array
        }
    }

    void printArray(const std::array<int, 5> &arr, const std::string &label) // defines a function that takes an array of integers as a const reference parameter and prints the elements of the array to the console
    {
        std::cout << label << std::endl;
        for(auto it = arr.begin(); it != arr.end(); ++it) // iterates through the array using an iterator, starting from the beginning of the array and ending at the end of the array
        {
            std::cout << "out: " << *it << std::endl; // prints the value of the current position of the iterator, which corresponds to an element in the array
        }
        std::cout << std::endl;
    }
}


int main()
{
    std::array<int, 5> nums{5, 80, 50, 20, 100}; // creates an array of integers with 5 elements using std::array and initializes it with the values 5, 80, 50, 20, and 100
    arrayOperations::printArray(nums, "The elements of the original array are: "); // calls the printArray function from the arrayOperations namespace, passing the nums array and a label as arguments, which prints the elements of the original array to the console
    arrayOperations::reverseArray(nums); // calls the reverseArray function from the arrayOperations namespace, passing the nums array as an argument, which reverses the order of the elements in the array
    arrayOperations::printArray(nums, "The elements of the reversed array are: "); // calls the printArray function from the arrayOperations namespace, passing the nums array and a label as arguments, which prints the elements of the reversed array to the console
    return 0;
}