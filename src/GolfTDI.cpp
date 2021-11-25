#include "../inc/GolfTDI.hpp"

GolfTDI::GolfTDI(int mdl, double cap, Engine *e, int nrbujinc) : Golf(mdl, cap, e), nrBujiiIncandescente(nrbujinc){}

void GolfTDI::porneste(){
    Golf::porneste();
    std::cout << "Motorul " << eng->getName() << " face brbrbrbrbrbrbrbrbrbr " << std::endl;
}

GolfTDI& GolfTDI::operator=(const GolfTDI& g)
{
    if(&g == this) return *this;

    Golf::operator=(g);
    this->nrBujiiIncandescente = g.nrBujiiIncandescente;
    return *this;
}
