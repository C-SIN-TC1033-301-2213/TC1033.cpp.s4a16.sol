#pragma once

class Fecha {
public:
    Fecha();
    ~Fecha();
    int getDia();
    int getMes();
    void setDia(int);
    void setMes(int);
private:
    int dia;
    int mes;
};