#include "Golf.hpp" 
#include<iostream>

class GolfTDI : public Golf{
        int nrBujiiIncandescente;
    public:
        GolfTDI(int mdl, double cap, Engine *e, int nrbujinc);
        void porneste();
        GolfTDI& operator=(const GolfTDI& g);
};