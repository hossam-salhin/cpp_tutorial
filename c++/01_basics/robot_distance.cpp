// robot distance calculator using speed and time

#include <iostream>

int main()
{
    double speed, time, distance; // in meters per second
    
    std::cout << "Enter the speed of the robot (m/s): ";
    std::cin >> speed;
    std::cout << "Enter the time the robot has been moving (seconds): ";
    std::cin >>time;

    distance = speed * time; // distance = speed * time
    std::cout << "The distance traveled by the robot is: " << distance << " meters." << std::endl;

    return 0;
}