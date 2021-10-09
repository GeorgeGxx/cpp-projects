#include <iostream>

using namespace std;

template <class MITIPO>
void sumar(MITIPO x);

int main() {
  sumar(1.9);
}
template <class MITIPO>
void sumar(MITIPO x){
  cout<<x;
}
