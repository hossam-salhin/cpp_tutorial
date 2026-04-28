/*
this small program will do:
1 - calculate the sum of two numbers
2 - calculate the distance using speed and time
3- find the Max/Min between 3 numbers
*/

#include <iostream>
#include <limits>
#include <fstream>
#include <ctime>

enum LogLevel
{
    INFO,
    ERROR
};

struct MinMax
{
    int max;
    int min;
};

void logToFile( LogLevel level, const std::string &text)   // function to log the operations performed in the program to a file named "log.txt"
{
    std::ofstream file("log.txt", std::ios::app); // open file in append mode
        
    if(file.is_open())
    {
        time_t now = time(0);
        char* dt = ctime(&now);
        std::string levelstr;
        if(level == INFO)
        {
            levelstr = "[INFO]";
        }
        else if (level == ERROR)
        {
            levelstr = "[ERROR]";
        }

        file << "Time: " << dt; // write timestamp to file
        file <<levelstr << " " << text << std::endl; // write text to file
        file << "-----------------------------" << std::endl; // add a separator line
        file.close(); // close the file
    }
    else
    {
        std::cout << "unable to open log file." << std::endl;
    }
}

int add(int a, int b)  // function to calculate the sum of two integers
{
    return a + b;
}

float calculateDistance(float speed ,float time)  // function to calculate the distance using speed and time
{
    return speed * time;
}
struct MinMax getMaxMin(int a, int b, int c)   // function to find the maximum and minimum between three integers
{
    struct MinMax result;
    result.max = a;
    result.min = a;
    if (b > result.max)
    {
        result.max = b;
    }
    if (c > result.max)
    {
        result.max = c;
    }
    if (b < result.min)
    {
        result.min = b;
    }
    if (c < result.min)
    {
        result.min = c;
    }
    return result;
}
 
int main()
{
    for(;;)
    {
        std::cout << "select the operation you want to perform: " << std::endl;
        std::cout << "1 - calculate the sum of two numbers" << std::endl;
        std::cout << "2 - calculate the distance using speed and time" << std::endl;
        std::cout << "3- find the Max/Min between 3 numbers" << std::endl;
        std::cout << "0 - exit the program" << std::endl;
        int choice;
        std::cin >> choice;

        if (!std::cin) // check if the input is a valid integer
        {
            std::cout << "invalid input, please enter a number." << std::endl;
            std::cin.clear(); // clear the error flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ignore the rest of the input
            continue; // go back to the beginning of the loop
        }

        if (choice == 1)
        {
            int num1 = 0, num2 = 0;
            std::cout << "enter two integers: ";
            std::cin >> num1 >> num2;
            if (!std::cin)   // check if the input is valid integers
        {
            std::cout << "invalid input, please enter a numbers." << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            logToFile(ERROR, "invalid input for addition operation: " + std::to_string(num1) + " and " + std::to_string(num2));
            continue;
      
        }
            int sum = add(num1, num2);
            std::cout << "the sum is: " << sum << std::endl << std::endl;
            // log the operation to the file
            logToFile(INFO, "operation: Addition.\ninputs: " + std::to_string(num1) + " and " + std::to_string(num2) + "\nresult: " + std::to_string(sum));
        }
        else if (choice == 2)

        {
            float speed = 0.0 , time =0.0 ;
            std::cout << "enter the speed in meter per second and time in seconds: ";
            std::cin >> speed >> time;
            if(!std::cin)   // check if the input is valid numbers
            {
                std::cout << "invalid input, please enter numbers." << std::endl;
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                logToFile(ERROR, "invalid input for distance calculation: speed = " + std::to_string(speed) + " and time = " + std::to_string(time));
                continue;
            }
            if (speed < 0 || time < 0)
            {
                std::cout << "speed and time must be non-negative." << std::endl;
                logToFile(ERROR, "invalid input for distance calculation: speed = " + std::to_string(speed) + " and time = " + std::to_string(time));
                continue; 
            }
            float distance = calculateDistance(speed, time);
            std::cout << "the distance is: " << distance << " meters" << std::endl << std::endl;
            logToFile(INFO, "operation: distance calculation.\ninputs: speed = " + std::to_string(speed) + " m/s and time = " + std::to_string(time) + " s\nresult: " + std::to_string(distance) + " m");
        }

        else if (choice == 3)
        {
            int num1 = 0, num2 = 0 , num3 = 0;
            std::cout << "enter three integers: ";
            std::cin >> num1 >> num2 >> num3;
            if (!std::cin)   // check if the input is valid integers
            {
                std::cout << "invalid input, please enter numbers." << std::endl;
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
                logToFile(ERROR, "invalid input for max/min calculation: " + std::to_string(num1) + ", " + std::to_string(num2) + " and " + std::to_string(num3));
                continue;
            }
            

            struct MinMax result = getMaxMin(num1, num2, num3);
            std::cout << "the maximum is: " << result.max << " and the minimum is: " << result.min << std::endl << std::endl;
            logToFile(INFO, "operation: max/min calculation.\ninputs: " + std::to_string(num1) + ", " + std::to_string(num2) + " and " + std::to_string(num3) + "\nresult: max = " + std::to_string(result.max) + " and min = " + std::to_string(result.min));
        }

        else if (choice == 0)
        {
            std::cout << "exiting the program..." << std::endl;
            logToFile(INFO, "program exited.");
            break;
        }

        else
        {
            std::cout << "invalid choice, please try again." << std::endl;
            logToFile(ERROR, "invalid choice entered: " + std::to_string(choice));
        }

    }
    return 0;
}