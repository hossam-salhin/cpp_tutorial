#include <iostream>
#include <limits>


int main()
{
    std::string name("");
    const std::string addedstring(" is an engineer.");
    std::cout << "string size is: " << name.size() << std::endl;

    std::cout << "Enter your name: ";
    std::cin >> name;

    if(!std::cin)
    {
        std::cout << "invalid input, Please enter a valid name. " << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cin >> name;
    }
    name += addedstring;
    std::cout << "Your full name is : "<< name <<std::endl;
    std::cout << "string size is: " << name.size() << std::endl;

    return 0;
}