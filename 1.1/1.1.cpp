
using namespace std;
#include <iostream>

int main()
{
    float x, t, s, result, comp;
    cin >> x;
    cin >> t;
    cin >> s;
    comp = pow(pow(x, 3) + 1, 1 / 2) + log(s);;
    cout << pow(x, t) / comp;
}
