#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib> // for rand()

using namespace std;

int main() {
     double x, y, R, A, B;

    cout << "x= "; cin >> x;
    cout << "y= "; cin >> y;
    cout << "R = "; cin >> R;

    for (int i = 1; i <= 10; ++i) {
        cout << "Постріл " << i << ":" << endl;
        cout << "  x = "; cin >> x;
        cout << "  y = "; cin >> y;

        if (((x * x) + (y - R) * (y - R) <= R * R) || ((x * x) + (y + R) * (y + R) <= R * R)) {
            cout << "  Потрапив!" << endl;
        } else {
            cout << "  Промах!" << endl;
        }
    }

    cout << "R = "; cin >> R;

    for (int i = 1; i <= 10; ++i) {
        srand(static_cast<unsigned>(time(0))); // генератор чисел
        cout << "A or R1 = "; cin >> A;
        cout << "B or R2 = "; cin >> B;
        cout << "Постріл " << i + 10 << ":" << endl;
        
        x = A + static_cast<double>(rand()) / RAND_MAX * (B - A);
        y = A + static_cast<double>(rand()) / RAND_MAX * (B - A);

        cout << fixed << setprecision(2);
        cout << "  x = " << x << ", y = " << y << endl;

        if (((x * x) + (y - R) * (y - R) <= R * R) || ((x * x) + (y + R) * (y + R) <= R * R)) {
            cout << "  Потрапив!" << endl;
        } else {
            cout << "  Промах!" << endl;
        }
    }

    return 0;
}
