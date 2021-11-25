#include "../inc/Engine.hpp"

Engine::Engine(std::string n) : name(n){}

Engine::Engine(const Engine& eng)
{
    this->name = eng.name;
}

std::string Engine::getName()
{
    return name;
}