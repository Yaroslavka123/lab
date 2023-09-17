using namespace std;
#include <iostream>

int main()
{
    float x, y, r;
    cin >> x;cin >> y;cin >> r;
    if ((x > 0 && y > 0) || (x < 0 && y < 0)) {
        cout << "outside the scope ";
        return 0;
    }
    if (x >= -r && pow(x+r,2)+ pow(y-r,2) >= pow(r,2))  {
        cout << "true";
        return 0;
     }
    if (x <= r &&  x >= 0 && pow(x,2 ) + pow(y,2) <= pow(r,2)) {
        cout << "true";
        return 0;
    }
    cout << "false";
}

