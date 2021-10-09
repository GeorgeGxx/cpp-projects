#include <iostream>

using namespace std;

int main() {

  char cadena[10] = "9929.0999";
  int n;
  float f;

  n = atoi(cadena);
  f = atof(cadena);
  cout<<n<<endl;
  std::cout << f;

  return 0;
}
