#include "ElectricEngine.hpp"
#include "Car.hpp"
class ElectricCar : public virtual Car
{

public:
    ElectricCar();
    ElectricCar(ElectricEngine* engine);
    ~ElectricCar();


    void charge();

    ElectricEngine* engine_;
};

