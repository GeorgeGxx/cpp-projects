#include <iostream>

using namespace std;

int main() {
  char cadena[20];
  std::cout << "Escribe una cadena: ";
  cin.getline(cadena,20,'\n');
  cout << cadena;

  return 0;
}
