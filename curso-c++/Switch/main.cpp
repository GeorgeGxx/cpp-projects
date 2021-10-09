#include <iostream>

using namespace std;

int main() {
    int n = 100;

    switch (n) {
      case 1:
          cout << "es 1" << '\n';
          break;
      case 2:
          cout << "es 2" << '\n';
          break;
      case 3:
          cout << "es 3" << '\n';
          break;
      default:
          cout << "Es otro número" << '\n';
          break;
    }

    return 0;
}
