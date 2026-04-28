/*
This code demonstrates the basics of pointers and references in C++. 
It includes two functions to swap the values of two integers, one using pointers and the other using references.
The main function initializes two integers, swaps their values using both methods, and prints the results to the console.
*/



#include <iostream>

void swap(int* a, int* b) // function to swap the values of two integers using pointers
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swap(int &a, int &b) // function to swap the values of two integers using references
{
    int temp = a;
    a = b; 
    b = temp;
}

int main()
{
    int x = 10;
    int y = 20;
    std::cout << "original values: x = " << x << " and y = " << y << std::endl;

    swap(&x , &y); // swapping the values of x and y using their addresses (pointers)
    std::cout << "swapped by addresses values: x = " << x << " and y = " << y << std::endl;

    swap(x, y); // swapping back the values using references
    std::cout << "swapped by references values: x = " << x << " and y = " << y << std::endl;
    return 0;

}