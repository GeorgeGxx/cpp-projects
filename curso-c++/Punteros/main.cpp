#include <iostream>

using namespace std;

int main() {
  int n;
  int *pn = nullptr;

  n = 20;
  pn = &n;

  cout << "n " << n << endl;
  cout << "pn " << pn << endl;

  cout << "&n " << &n << endl;
  cout << "*pn " << *pn << endl;

}
