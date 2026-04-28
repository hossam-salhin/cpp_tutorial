#include <iostream>

namespace TempSensor
{
    float value = 22.3;
}

namespace PressureSensor
{
    float value = 101.4;
}

namespace HumiditySensor
{
    float value = 50.8;
}


int main()
{
    std::cout << "Temperatue value: " << TempSensor::value << " C" <<std::endl;
    std::cout << "Pressure value: " << PressureSensor::value << " hpa" <<std::endl;
    std::cout << "Humidity value: " << HumiditySensor::value << " %" <<std::endl;
    return 0;
}