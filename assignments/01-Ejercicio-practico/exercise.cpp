#include <iostream>
#include "Empleado.hpp"
#include "Fecha.hpp"

int main() 
{
  Empleado emp1, emp2;
  Fecha f1, f2;

//Incializando el primer empleado
  emp1.setNombeEmp("Pepe");
  emp1.setSueldo(10000);
  f1.setDia(5);
  f1.setMes(19);
  emp1.setFecha(f1);

//Incializando el segundo empleado
  emp2.setNombeEmp("Rocio");
  emp2.setSueldo(12000);
  emp2.setFecha(f2);

//Mostrando los datos de los empleados
  std::cout << "MOSTRANDO DATOS DE LOS DOS EMPLEADOS->" << "\n";
  std::cout << emp1.getNombreEmp() << "," << emp1.getSueldoEmp() << "," 
            << emp1.getFecha().getDia() << "/" << emp1.getFecha().getMes() << "\n";

  std::cout << emp2.getNombreEmp() << "," << emp2.getSueldoEmp() << "," 
            << emp2.getFecha().getDia() << "/" << emp2.getFecha().getMes() << "\n";

  std::cout << "INTENTANDO SUBIR EL SUELDO A PEPE UN 15%" << "\n";
  emp1.subeSueldo(15);
  std::cout << emp1.getNombreEmp() << "," << emp1.getSueldoEmp() << "\n"; 

  std::cout << "INTENTANDO SUBIR EL SUELDO A PEPE UN 5%" << "\n";
  emp1.subeSueldo(5);
  std::cout << emp1.getNombreEmp() << "," << emp1.getSueldoEmp() << "\n"; 

  return 0;
}
