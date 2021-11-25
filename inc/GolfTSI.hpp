#include "Golf.hpp" 
#include<iostream>

class GolfTSI : public Golf{
    public:
        GolfTSI(int mdl, double cap, Engine *e);
        void porneste();
};