#include "PetrolEngine.hpp"

#include "Car.hpp"
class PetrolCar : public virtual Car
{
public:
    PetrolCar();
    PetrolCar(PetrolEngine* engine);
    ~PetrolCar();


    void refuel();

    PetrolEngine* engine_;
};

