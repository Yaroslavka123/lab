#include <iostream>
using namespace std;
int main() {
    int LadX, LadY, HorseX, HorseY;
    cout << "Enter the x and y coordinates of the rook separated by a space ";
    cin >> LadX >> LadY;
    cout << "Enter the x and y coordinates of the knight separated by a space ";
    cin >> HorseX >> HorseY;
    if (LadX <= 0 || LadY <= 0 || HorseX <= 0 || HorseY <= 0 || LadX >8 || LadY >8 || HorseX >8 || HorseY >8) cout << "Incorrect coordinates entered";
    else {
        if (LadX == HorseX || LadY == HorseY || pow((LadX - HorseX), 2) - pow((LadY - HorseY), 2) == 5) cout << "Threatens";
        else {
            cout << "Does not threaten, but there is always a move in which the rook threatens the knight\n";
            double Q = pow((LadX - HorseX), 2) + pow((LadY - HorseY), 2);
            if (Q == 4 || Q == 16 || Q == 10 || Q == 2 || Q == 18 || Q == 20) cout << "For a knight, there is a move in which it threatens a rook\n";
            else cout << "There is no move for the knight in which it threatens the rook";
        }
    }
    return 0;
}