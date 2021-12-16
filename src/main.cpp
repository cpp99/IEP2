#include "../inc/GolfTDI.hpp"
#include "../inc/GolfTSI.hpp"
#include "../inc/config.hpp"
#include <memory>
#include "Driver.cpp"
#include "Passenger.cpp"

int main()
{
    Engine e1("VR6");
    Engine e2("2JZ");
    Engine e3("RB26");

    std::cout << "\n\n\n";
    conf::version();
    GolfTDI golf1(1, 1900, &e1, 4);
    GolfTSI golf2(2, 1400, &e2);
    //GolfTDI golf3(3, 1900, &e3, 4);
    GolfTSI golf4(4, 1400, &e1);
    GolfTDI golf5(5, 1900, &e2, 4);
    GolfTSI golf6(6, 1400, &e3);
    GolfTDI golf7(7, 1900, &e1, 4);
    GolfTSI golf8(8, 1400, &e2);

    // golf1.porneste();
    // golf2.porneste();
    // golf3.porneste();
    // golf4.porneste();
    // golf5.porneste();
    // golf6.porneste();
    // golf7.porneste();
    // golf8.porneste();

    std::cout << "\n\n\n";

    /*GolfTDI golf10 = golf3;
    golf10=golf10;
    golf10.porneste();*/
    
    //Unique pointer
    std::unique_ptr<Driver> driver(new Driver("Daniela", &golf5));
    //std::unique_ptr<Driver> driver1(driver);
    //Driver driver2(driver);
    driver->putName();
    std::unique_ptr<Driver> driver2 = move(driver);
    driver2->putName();
    //driver->putName();


    //Shared Pointer
    std::shared_ptr<GolfTDI> golf3(new GolfTDI(3, 1900, &e3, 4));
    std::cout << "\n\n";
    Passenger p1("Armand");
    p1.setCar(golf3);
    Passenger p2("Cristi");
    p2.setCar(golf3);
    Passenger p3("Andreea");
    p3.setCar(golf3);
    std::cout << "Passengers:" << golf3.use_count()-1 << std::endl;


    //Imitatie de mutex
    std::cout << "\n\n";
    Golf golf(7, 1600, &e1);
    golf.porneste();
    golf.lockCar();
    golf.porneste();
    golf.unlockCar();
    golf.porneste();
    std::cout << "\n\n";

    return 0;
}