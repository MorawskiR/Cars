#pragma once

class PetrolEngine
{
public:
    PetrolEngine();
    PetrolEngine(int power, float capacity, int gears);
    void changeGear(int gear);

    int power_;         // in HP
    float capacity_;    // in ccm
    int gears_;
    int currentGear_;
};
