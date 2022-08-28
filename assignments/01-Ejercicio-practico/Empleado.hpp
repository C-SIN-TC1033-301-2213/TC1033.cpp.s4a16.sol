#pragma once
#include <iostream>
#include "Fecha.hpp"

class Empleado{
public:
    Empleado();
    ~Empleado();
    std::string getNombreEmp();
    float getSueldoEmp();
    Fecha getFecha();
    void setNombeEmp(std::string);
    void setSueldo(float);
    void setFecha(Fecha);
    void subeSueldo(float);
private:
    std::string nombreEmp;
    float sueldoEmp;
    Fecha cumpleAniosEmp;
};