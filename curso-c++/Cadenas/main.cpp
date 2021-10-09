#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char c[] = "Hola mundo!!";
    char b[] = "ola mundo!!";

    if (strcmp(c,b)==0) {
      std::cout << "Iguales";
    }else{
      std::cout << "Diferentes";
  }

    return 0;
}
