#include <iostream>
#include "Persona.h"
#include "Hombre.h"

using namespace std;

int main() {
  //Persona jorge(172, 10); //Objeto estático
  //cout<<jorge.getAltura() << endl;

  //Persona *alberto = new Persona(190, 80); //Objeto dinamico
  //delete alberto; //Invocar destructor y liberar recursos apartados
  /*cout<<alberto->getAltura();
  alberto->saludar();
  alberto->saludar(1);
  alberto->saludar(1,2);*/

  /*Persona* x = new Persona();
  Persona* y = new Persona();
  Persona* z = new Persona();*/

  //z -> mostrarC();

  Hombre* jose = new Hombre();
  cout<<jose->altura;

  return 0;
}
