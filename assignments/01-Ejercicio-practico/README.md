# Ejercicio - Práctico-clases Empleado y Fecha

Este proyecto tiene la estructura básica para cualquier proyecto C++.

## Diagrama de Clases

```mermaid
classDiagram
      direction LR
      
      class Empleado
      Empleado: -string nombreEmp
      Empleado: -float sueldoEmp
      Empleado: -Fecha cumpleAnioEmp
      Empleado: Empleado()
      Empleado: ~Empleado()
      Empleado: +string getNombreEmp()
      Empleado: +float getSueldoEmp()
      Empleado: +Fecha getFecha()
      Empleado: +void setNombreEmp(string)
      Empleado: +void setSueldo(float)
      Empleado: +void setFecha(Fecha)
      Empleado: +void subeSueldo(float)
      
      class Fecha
      Fecha: -int dia
      Fecha: -int mes
      Fecha: Fecha()
      Fecha: ~Fecha()
      Fecha: +int getDia()
      Fecha: +int getMes()
      Fecha: +void setDia(int)
      Fecha: +void setMes(int)
      
      Empleado *--> "1" Fecha
```      
La carpeta contiene el código fuente y el archivo de construcción ```make```.

La carpeta `build` contiene el codigo binario generado por el archivo de construcción ```make```.

Consulta el archivo assignments/README.md para instrucciones sobre la compilación y ejecución del proyecto.
