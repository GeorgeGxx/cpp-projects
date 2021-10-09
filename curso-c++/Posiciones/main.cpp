#include <iostream>

using namespace std;

int main() {
  int n[] = {1,2,3,4};
  int *elementos;

  elementos = n;
  for(int i = 0; i < 4; i++){
    cout << "posicion " << n[i] << "dirección " << elementos++ << endl;
  }

  return 0;
}
