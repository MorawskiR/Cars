#pragma once 
#include "ElectricEngine.hpp"
#include "PetrolEngine.hpp"
#include "Car.hpp"
#include "ElectricCar.hpp"
#include "PetrolCar.hpp"

class HybridCar : public ElectricCar, PetrolCar
{
public:
    HybridCar(PetrolEngine* petrolEng, ElectricEngine* electricEng);
    ~HybridCar();

    // void turnLeft() ;
    // void turnRight() ;
    // void brake() ;
    // void accelerate(int speed) ;

    // void charge() ;
    // void refuel() ;

    PetrolEngine* petrolEngine_;
    ElectricEngine* electricEngine_;
};

