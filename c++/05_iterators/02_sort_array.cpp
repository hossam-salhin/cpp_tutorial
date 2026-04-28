#include <iostream>
#include <array>
#include <algorithm>
#include <functional>

bool cmp(int a, int b) // defines a comparison function that takes two integers as parameters and returns true if the first integer is less than the second integer, and false otherwise
{
    return a > b; // returns true if a is more than b, and false otherwise
}

//c++ array as a parameter, which is passed by reference to avoid copying the entire array
void inputArray(std::array<int, 5>& arr) 
{
    std::cout << "Enter 5 integers for the c++ array: ";
    for(auto it = arr.begin(); it != arr.end(); ++it) // iterates through the array using an iterator, starting from the beginning of the array and ending at the end of the array
    {
        std::cin >> *it; //takes input from the user and stores it in the array
    }
}

//c++ array as a parameter, 
//which is passed by const reference to avoid copying the entire array and to prevent modification of the array
void printArray(const std::array<int, 5>& arr) 
{
    std::cout << "The elements of the c++ array are: " << std::endl;
    for(auto it = arr.begin(); it != arr.end(); ++it) // iterates through the array using an iterator, starting from the beginning of the array and ending at the end of the array
    {
        std::cout <<"out: " <<  *it << std::endl; //prints the elements of the array
    }
    std::cout << std::endl;
}


// defines a function that takes a function as a parameter, 
// which is a std::function that takes a reference to an array of integers and returns void, and an array of integers as a reference parameter
void operation(std::function<void(std::array<int, 5>&)> func, std::array<int, 5> &arr) 
{
    func(arr); // calls the function passed as a parameter, passing the array as an argument
}


int main()
{
    std::array<int, 5> nums; // creates an array of integers with 5 elements using std::array

    //inputArray(nums); // calls the inputArray function, passing the nums array as an argument, which allows the user to input values into the array
    operation(inputArray, nums); // calls the operation function, passing the inputArray function and the nums array as arguments, which allows the user to input values into the array using the inputArray function
   
    std::sort(nums.begin(), nums.end(), cmp); // sorts the elements of the array in descending order using the sort function from the algorithm library, and the cmp function as the comparison function

    std::cout << "Sorted array in descending order:" << std::endl;
    //printArray(nums); // calls the printArray function, passing the nums array as an argument, which prints the sorted elements of the array to the console
    operation(printArray, nums); // calls the operation function, passing the printArray function and the nums array as arguments, which prints the sorted elements of the array to the console using the printArray function

    std::sort(nums.begin(), nums.end(), [](int a, int b) { return a < b;} );  // sorts the elements of the array in ascending order using the sort function from the algorithm library, and a lambda function as the comparison function that returns true if a is less than b, and false otherwise  
    std::cout << "Sorted array in ascending order:" << std::endl;
    operation(printArray, nums); // calls the operation function, passing the printArray function and the nums array as arguments, which prints the sorted elements of the array to the console using the printArray function
    return 0;
}