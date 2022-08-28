#include "MiClase.hpp"

//Constructor por default
MiClase::MiClase()
{
    this->var1 = 101;
}

//Getters
int MiClase::getVar1()
{
    return this->var1;
}

//Setters
void MiClase::setVar1(int var1)
{
    this->var1=var1;
}