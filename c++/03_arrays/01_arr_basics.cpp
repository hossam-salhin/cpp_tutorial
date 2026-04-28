/*
This code demonstrates the basics of arrays in C++. 
It includes both C-style arrays and C++ std::array. 
The program allows the user to input values into both types of arrays and then prints those values to the console.
*/

#include <iostream>
#include <array>

void inputArray(int arr[]) //c-style array as a parameter, which is actually a pointer to the first element of the array
{
    std::cout << "Enter 5 integers for the c-style array: ";
    for(size_t i = 0; i < 5 ; ++i)
    {
        std::cin >> arr[i]; //takes input from the user and stores it in the array
    }
}

void printArray(int arr[]) //c-style array as a parameter, which is actually a pointer to the first element of the array
{
    std::cout << "The elements of the c-style array are: " << std::endl;
    for(size_t i = 0; i < 5 ; ++i)
    {
        std::cout <<"out: " <<  arr[i] << std::endl; //prints the elements of the array
    }
    std::cout << std::endl;
}
//----------------------------------------------------------------------------------------------

void inputArray(std::array<int, 5>& arr) //c++ array as a parameter, which is passed by reference to avoid copying the entire array
{
    std::cout << "Enter 5 integers for the c++ array: ";
    for(size_t i = 0; i < arr.size() ; ++i)
    {
        std::cin >> arr[i]; //takes input from the user and stores it in the array
    }
}
void printArray(const std::array<int, 5>& arr) //c++ array as a parameter, which is passed by const reference to avoid copying the entire array and to prevent modification of the array
{
    std::cout << "The elements of the c++ array are: " << std::endl;
    for(size_t i = 0; i < arr.size() ; ++i)
    {
        std::cout <<"out: " <<  arr[i] << std::endl; //prints the elements of the array
    }
    std::cout << std::endl;
}


int main()
{
    int c_array[5]; //a c-style array of integers with 5 elements and initializes it with the given values
    std::cout << "C-style array:" << std::endl;
    inputArray(c_array); //calls the inputArray function, passing the c_array as an argument, which allows the user to input values into the array
    printArray(c_array); //calls the printArray function, passing the c_array as an argument, which prints the elements of the array to the console
    

    std::array<int, 5> cpp_array; //a c++ array of integers with 5 elements and initializes it with the given values
    std::cout << "C++ array:" << std::endl;
    inputArray(cpp_array); //calls the inputArray function, passing the cpp_array as an argument, which allows the user to input values into the array
    printArray(cpp_array); //calls the printArray function, passing the cpp_array as an argument, which prints the elements of the array to the console
    return 0;
}