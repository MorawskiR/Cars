#include "PetrolEngine.hpp"
#include <iostream>

PetrolEngine::PetrolEngine()
{
    power_ = 10;
    capacity_ = 10.09;
    gears_ = 10;
    currentGear_ = 90;
}
PetrolEngine::PetrolEngine(int power, float capacity, int gears)
    : power_(power)
    , capacity_(capacity)
    , gears_(gears)
    , currentGear_(0)
{
    std::cout << __FUNCTION__ << std::endl;
}

void PetrolEngine::changeGear(int gear)
{
    // TODO: Add checking if gear is between -1 and gears_
    // -1 is for REAR
    // 0 is for NEUTRAL
    currentGear_ = gear;
    std::cout << __FUNCTION__ << std::endl;
}
