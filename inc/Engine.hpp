#include<iostream>


class Engine{
        std::string name;
    public:
        Engine(const Engine& eng);
        Engine(std::string n);
        std::string getName();
};