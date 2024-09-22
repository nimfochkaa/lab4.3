#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double a, b, c, xp, xk, dx, x, F;
    cout << " a = ";
    cin >> a;
    cout << " b = ";
    cin >> b;
    cout << " c = ";
    cin >> c;
    cout << " xp = ";
    cin >> xp;
    cout << " xk = ";
    cin >> xk;
    cout << " dX = ";
    cin >> dx;

    cout << fixed;
    cout << "--------------------------------" << endl;
    cout << "|" << setw(10) << "x" << " |" << setw(15) << "F" << " |" << endl;
    cout << "--------------------------------" << endl;

    x = xp;
    while (x <= xk)
    {
        if (c < 0 && b != 0) {
            F = a * x * x + b * b * x;
        }
        else if (c > 0 && b == 0) {
            F = (x + a) / (x + c);
        }
        else {
            F = x / c;
        }
        cout << "|" << setw(10) << setprecision(2) << x
            << " |" << setw(15) << setprecision(3) << F
            << " |" << endl;
        x += dx;

    }

    return 0;
}

