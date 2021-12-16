#pragma once
#include"Engine.hpp"
#include<iostream>

class Golf {
    protected: 
        Engine *eng;
        int model;
        double capCil;
        bool inService;
        Golf(const Golf& g);
        Golf& operator=(const Golf& g);
    public:
        Golf();
        Golf(int mdl, double cap, Engine *e);
        void lockCar();
        void unlockCar();
        void porneste();
};