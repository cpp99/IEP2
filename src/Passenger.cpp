#include<iostream>
#include<memory>
#include "../inc/Golf.hpp"
class Passenger
{
    private:
        std::string name;
        std::shared_ptr<Golf> carHeGoesWith;
        
    public:
        Passenger(){};
        Passenger(std::string nm): name(nm){};
        Passenger(const Passenger& p)
        {
            name = p.name;
        }

        void setCar(const std::shared_ptr<Golf> &golf)
        {
            carHeGoesWith = golf;
        }
};