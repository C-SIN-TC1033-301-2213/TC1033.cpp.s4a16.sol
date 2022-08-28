#include <iostream>
#include "MiClase.hpp"

int main() 
{
  MiClase miObjeto;

  std::cout << "Valor de var1 con el constructor por default=" << miObjeto.getVar1() << "\n";

  miObjeto.setVar1(402);
  std::cout << "Valor de var1 al cambiarlo a 402=" << miObjeto.getVar1() << "\n";

  miObjeto.setVar1(1500);
  std::cout << "Valor de var1 al cambiarlo a 1500=" << miObjeto.getVar1() << "\n";

  return 0;
}
