#pragma once
#include"Engine.hpp"
#include<iostream>

class Golf {
    protected: 
        Engine *eng;
        int model;
        double capCil;
    public:
        Golf(const Golf& g);
        Golf& operator=(const Golf& g);
        Golf();
        Golf(int mdl, double cap, Engine *e);
        void porneste();
};