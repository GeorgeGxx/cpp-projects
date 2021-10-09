#include <iostream>
#include "persona.h"

using namespace std;

int main() {
  Persona jorge(172,10);
  cout<<jorge.getAltura() << endl;

  Persona* jorge = new Persona(190,80);
  cout<<jorge->getAltura();
  

  return 0;
}
