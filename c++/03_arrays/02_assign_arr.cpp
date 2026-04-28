#include <iostream>

void inputArray(int arr[], unsigned int size)
{
    std::cout << "Enter " <<size << " integers between 101 and 999: "; 
    for(size_t i = 0; i < size; ++i)
    {
        while(true) // loops indefinitely until the user enters a valid input for the current element of the array
        {
            std::cin >> arr[i]; // takes input from the user and stores it in the current position of the array
            
            // checks if the input entered by the user is between 101 and 999, which is a valid input for the elements of the array. 
            // If it is valid, the loop breaks and moves on to the next element of the array.
            //  If it is not valid, the program prompts the user to enter a valid input for the current element of the array
            if(arr[i] > 100 && arr[i] < 1000) {break;} 

            // if the input entered by the user is not between 101 and 999, 
            // it is an invalid input, and the program prompts the user to enter a valid input for the current element of the array
            else {std::cout << "Invalid input. Please enter an integer between 101 and 999: ";} 
            
        }
    }
}

void printArray(int arr[], unsigned int size)
{
    std::cout << "The elements of the array are: " << std::endl;
    for(size_t i = 0; i < size; ++i) // iterates through the array using a for loop, starting from the first element and ending at the last element
    {
        std::cout << "out: " << arr[i] << std::endl; // prints the value of the current element of the array to the console
    }
    std::cout << std::endl;
}

int findIndex(int arr[], unsigned int size, int target)
{
    for(size_t i = 0; i < size; ++i) // iterates through the array using a for loop, starting from the first element and ending at the last element
    {
        if(arr[i] == target) // checks if the current element of the array is equal to the value being searched for
        {
            return i; // if the current element of the array is equal to the target being searched for, it returns the index of that element in the array
        }
    }
    return -1; // if the value being searched for is not found in the array, it returns -1 to indicate that the value was not found
}

int main()
{
    int target = 300; // defines a target value of 300 to search for in the array
    unsigned int size ;
    
    std::cout << "Enter the size of the array: ";
    while(true) // loops indefinitely until the user enters a valid input for the size of the array
    {
        std::cin >> size;
        if(size > 0) // checks if the size entered by the user is greater than 0, which is a valid input for the size of the array
        {
            break;
        }
        else // if the size entered by the user is not greater than 0, it is an invalid input, and the program prompts the user to enter a valid input
        {
            std::cout << "Invalid input. Please enter a positive integer for the size of the array: ";
        }
    }

    int arr[size]; // creates an array of integers with the size specified by the user

    inputArray(arr, size);

    int targetIndex = findIndex(arr, size, target); // calls the findIndex function, passing the array, its size, and the target value as arguments, which returns the index of the target value in the array if it is found, or -1 if it is not found
    printArray(arr, size);
    
    if(targetIndex != -1) // checks if the target value was found in the array by checking if the index returned by the findIndex function is not equal to -1
    {
        std::cout << "The target value " << target << " is found at index: " << targetIndex << std::endl; // if the target value is found in the array, it prints the index of that value to the console
    }
    else
    {
        std::cout << "The target value " << target << " is not found in the array." << std::endl; // if the target value is not found in the array, it prints a message to the console indicating that the value was not found
    }

    return 0;
}