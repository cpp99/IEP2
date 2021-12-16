#include "../inc/Golf.hpp"

Golf::Golf(){}

Golf::Golf(int mdl, double cap, Engine *e) : capCil(cap), model(mdl), eng(e), inService(false){}



void Golf::porneste()
{
    if(!inService){
        std::cout << "Golf " << this->model << " cu motor de " << (this->capCil)/1000 <<" porneste ...\n ";
    }
    else{
        std::cout << "Golf " << this->model << " cu motor de " << (this->capCil)/1000 <<" e in service. Nu porneste :( \n";
    }
}

Golf::Golf(const Golf& g)
{
    eng = new Engine(*g.eng);
    capCil = g.capCil;
    model = g.model;
}


Golf& Golf::operator=(const Golf& g)
{
    if(&g == this) {
        return *this;
    }
    delete eng;
    eng = new Engine(*g.eng);

    model = g.model;
    capCil = g.capCil;

    return *this;
}

void Golf::lockCar()
{
    std::cout << "... intra in service ...\n";
    inService = true;
}

void Golf::unlockCar()
{
    std::cout << "... iese din service ...\n";
    inService = false;
}