#include "../inc/GolfTSI.hpp"

GolfTSI::GolfTSI(int mdl, double cap, Engine *e) : Golf(mdl, cap, e){}

void GolfTSI::porneste(){
    Golf::porneste();
    std::cout << "Motorul " << eng->getName() << " face vrumvrumvrumvrumvrumvrum" << std::endl;
}

