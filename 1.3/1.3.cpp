#include <iostream>
using namespace std;

int main() {
    double x1, x2, x3, x4;
    cin >> x1 >> x2 >> x3 >> x4;
    if (x1 <= x2) swap(x1, x2);
    if (x2 > x3) swap(x2, x3);
    if (x3 <= x4) swap(x3, x4);
    cout << x1 << x2 << x3 << x4;
    return 0;
}