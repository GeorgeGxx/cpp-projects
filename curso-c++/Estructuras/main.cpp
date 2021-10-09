#include <iostream>

using namespace std;

struct Persona{
  char nombre[20];
  int edad;
  char nacionalidad[20];
}jorge ={"jorge gallaga", 10, "mexicano"}
,alberto = {"alberto arevalo", 20, "chileno"};

;

int main() {
  cout << jorge.nombre << endl;
  cout << alberto.edad;
  return 0;
}
