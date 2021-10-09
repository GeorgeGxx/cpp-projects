#include <iostream>

using namespace std;

int main() {
    int a,b;

    cout << "Numero A: " << endl;
    cin >> a;
    cout << "Numero B: " << endl;
    cin >> b;

    int rsuma = a+b;
    int rresta = a-b;
    int rmult = a*b;
    int rdiv = a/b;

    cout << "suma: " << rsuma << endl;
    cout << "resta: " << rresta << endl;
    cout << "rmult: " << rmult << endl;
    cout << "rdiv: " << rdiv << endl;

    return 0;
}
