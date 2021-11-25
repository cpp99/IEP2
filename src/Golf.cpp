#include "../inc/Golf.hpp"

Golf::Golf(){}

Golf::Golf(int mdl, double cap, Engine *e) : capCil(cap), model(mdl), eng(e){}



void Golf::porneste()
{
    std::cout << "Golf " << this->model << " cu motor de " << (this->capCil)/1000 <<" porneste ... ";
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
    //std::cout << "1"<< std::endl;
    delete eng;
    //std::cout << "2"<< std::endl;
    eng = new Engine(*g.eng);

    model = g.model;
    capCil = g.capCil;

    return *this;
}
