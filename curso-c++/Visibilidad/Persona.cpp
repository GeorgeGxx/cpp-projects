#include "Persona.h"
#include <iostream>

using namespace std;

int Persona::c = 0;

void Persona::mostrarC(){
  cout << c;
}

void Persona::setAltura(int _altura){
  altura = _altura;
}

int Persona::getAltura(){
  return altura;
}

void Persona::saludar(){
  cout << "saludar a" << endl;
}

/*void Persona::saludar(int x)
{
  cout << "saludar b" << endl;
}*/

/*void Persona::saludar(int x, int, y)
{
  cout << "saludar c" << endl;
}*/