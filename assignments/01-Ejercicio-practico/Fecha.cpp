#include "Fecha.hpp"

//Constructor por default
Fecha::Fecha()
{
    this->dia = 1;
    this->mes = 1;

}

//Destructor
Fecha::~Fecha()
{}

//Getters
int Fecha::getDia()
{
    return this->dia;
}
int Fecha::getMes()
{
    return this->mes;
}

//Setters
void Fecha::setDia(int dia)
{
    this->dia=dia;
}
void Fecha::setMes(int mes)
{
    this->mes=mes;
}