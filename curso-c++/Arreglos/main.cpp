#include <iostream>

using namespace std;

int main() {
    int a[5]={1,2,3,4,5};
    int r;

    for (int i = 0; i<5; i++) {
         r += a[i];
    }

    std::cout << r;
    return 0;
}
