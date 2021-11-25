#include "Golf.hpp" 
#include<iostream>

class GolfTDI : public Golf{
        int nrBujiiIncandescente;
    public:
        GolfTDI(const GolfTDI& g);
        GolfTDI(int mdl, double cap, Engine *e, int nrbujinc);
        void porneste();
        GolfTDI& operator=(const GolfTDI& g);
};