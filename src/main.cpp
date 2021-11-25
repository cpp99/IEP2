#include "../inc/GolfTDI.hpp"
#include "../inc/GolfTSI.hpp"
#include "../inc/config.hpp"

int main()
{
    Engine e1("VR6");
    Engine e2("2JZ");
    Engine e3("RB26");

    std::cout << "\n\n\n";
    conf::version();
    GolfTDI golf1(1, 1900, &e1, 4);
    GolfTSI golf2(2, 1400, &e2);
    GolfTDI golf3(3, 1900, &e3, 4);
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

    GolfTDI golf10(1, 1, &e1, 1);
    golf10=golf3;
    golf10=golf10;
    golf10.porneste();
    


    return 0;
}