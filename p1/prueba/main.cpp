#include <iostream>

using namespace std;

int main() {
    //int var;

    //var = 10; /*
    //var = var + 10;
    //var = var + var;
    //var = var + var;
    //cout << var << endl;

    //float var = .1;

    //var = var + 1.;
    //var = var + 1e1;
    //var = var + 1e-1;
    //cout << var << endl;

    int i = 10, j = 3;
    int k = (i % j * i / 3) / (j % i - j / i);

    cout << k << endl;
}