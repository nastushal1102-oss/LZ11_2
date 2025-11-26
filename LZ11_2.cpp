#include <windows.h>
#include <iostream>
#include <cmath>   // для sin, cos, sqrt, cbrt
using namespace std;

// Функція, що обчислює три результати: a, b, y
void calculate(double x, double c, double& a, double& b, double& y) {
    a = cbrt(fabs(b + c));   // тимчасово b не відоме — визначимо нижче
    b = sqrt(x);
    a = cbrt(fabs(b + c));   // після обчислення b, повторно обчислюємо a
    y = a * pow(sin(b), 2) + b * pow(cos(a), 2);
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double x, c, a, b, y;

    cout << "Введіть значення x: ";
    cin >> x;
    cout << "Введіть значення c: ";
    cin >> c;

    calculate(x, c, a, b, y);

    cout << "\nРезультати обчислень:\n";
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "y = " << y << endl;

    return 0;
}