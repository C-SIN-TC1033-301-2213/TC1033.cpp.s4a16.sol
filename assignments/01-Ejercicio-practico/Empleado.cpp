#include <iostream>

#include "Empleado.hpp"
#include "Fecha.hpp"

//Constructor por default
Empleado::Empleado()
{
    this->nombreEmp="SIN NOMBRE";
    this->sueldoEmp=0.0f;
    this->cumpleAniosEmp= Fecha();
}

//Destructor
Empleado::~Empleado()
{}

//Getters
std::string Empleado::getNombreEmp()
{
    return nombreEmp;
}
float Empleado::getSueldoEmp()
{
    return sueldoEmp;
}
Fecha Empleado::getFecha() 
{
    return cumpleAniosEmp;
}

//Setters
void Empleado::setNombeEmp(std::string nombreEmp)
{
    this->nombreEmp = nombreEmp;
}
void Empleado::setSueldo(float sueldoEmp) 
{
    this->sueldoEmp = sueldoEmp;
}
void Empleado::setFecha(Fecha cumpleAniosEmp)
{
    this->cumpleAniosEmp=cumpleAniosEmp;
}

//Subir el sueldo al empleado
void Empleado::subeSueldo(float porc_inc)
{
    if (porc_inc < 1 || porc_inc >10)
        std::cout << "Porcentaje inválido, no hay incremente salarial" << "\n";
    else
    {
     sueldoEmp *= (1+porc_inc / 100);
    }
}
