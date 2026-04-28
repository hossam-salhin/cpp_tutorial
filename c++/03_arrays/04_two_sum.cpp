/* Given an array of integers, return the indices of the two numbers that add up to a specific target. */

#include <iostream>
#include <vector> 
#include <algorithm>

std::vector<int> twoSum(std::vector<int>& nums, int target) // defines a function that takes a vector of integers and a target value as parameters, and returns a vector containing the two numbers that add up to the target value
{
    // sorts the elements of the vector in ascending order using the sort function from the algorithm library, 
    // and a lambda function as the comparison function that returns true if a is less than b, and false otherwise
    std::sort(nums.begin(), nums.end(), [](int a, int b) {return a < b;}); 

    for(auto lit = nums.begin(), rit = nums.end() -1; lit < rit; )  // iterates through the vector using two iterators, one starting from the beginning of the vector and the other starting from the end of the vector, and continues until the two iterators meet in the middle of the vector
    {
        int sum = *lit + *rit;
        if(sum == target) // checks if the sum of the values at the positions pointed to by the two iterators is equal to the target value
        {
            return {*lit, *rit};
        }
        else if(sum < target) // checks if the sum of the values at the positions pointed to by the two iterators is less than the target value
        {
            ++lit;
        }
        else // if the sum of the values at the positions pointed to by the two iterators is greater than the target value
        {
            --rit;
        }
    }
    return {};
}


int main()
{
    std::vector<int> nums{1, 2, 5, 3, 4, 6}; // creates a vector of integers and initializes it with the values 1, 2, 5, 3, 4, and 6};
    int target = 8; // defines a target value of 8 to search for in the vector
    
    std::cout << "The elements of the vector are: " << std::endl;
    for(const auto& element : nums) // iterates through the vector using a range-based for loop, starting from the first element and ending at the last element
    {
        std::cout << "out: " << element << std::endl; // prints the value of the current element of the vector to the console
    }

    
    
    auto result = twoSum(nums, target); // calls the twoSum function, passing the nums vector and the target value as arguments, which returns a vector containing the two numbers that add up to the target value
    if(!result.empty()) // checks if the result vector is not empty, which indicates that a pair of numbers that add up to the target value was found in the vector
    {
        std::cout << "The two numbers that add up to " << target << " are: " << result[0] << " and " << result[1] << std::endl; // if a pair of numbers that add up to the target value was found in the vector,
    }
    else // if the result vector is empty, which indicates that no pair of numbers that add up to the target value was found in the vector
    {
        std::cout << "No two numbers add up to " << target << " in the vector." << std::endl; // prints a message to the console indicating that no pair of numbers that add up to the target value was found in the vector
    }
    return 0;
}