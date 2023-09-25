#include <iostream>
using namespace std;


int main() {
    double x1, y1, x2, y2, x3, y3, s, t, u;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> s >> t >> u;
    bool q = s * x1 + t * y1 + u == 0 ||
        s * x2 + t * y2 + u == 0 ||
        s * x3 + t * y3 + u == 0;
    if (q) cout << " Enter numbers";
    else
    if (s * x1 + t * y1 + u > 0 && s * x2 + t * y2 + u > 0 && s * x3 + t * y3 + u > 0) cout << "The triangle is in the same half-plane";
    else
    (s * x1 + t * y1 + u < 0 && s * x2 + t * y2 + u < 0 && s * x3 + t * y3 + u < 0) ? cout << "The triangle is in the same half-plane":
    cout << "A triangle is in two half-planes";
    return 0;
}