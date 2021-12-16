#include<iostream>
#include "../inc/Golf.hpp"
class Driver
{
    private:
        Golf *carHeDrives;
        std::string name;
    public:
        Driver(){};
        Driver(std::string nm, Golf *g): name(nm), carHeDrives(g){};
        Driver(const Driver& d)
        {
            carHeDrives = d.carHeDrives;
            name = d.name;
        }

        void putName()
        {
            std::cout << "Drivers name: " << name << std::endl;
        }
};