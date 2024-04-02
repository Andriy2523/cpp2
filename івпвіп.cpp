#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

template <typename T>
void calculateMedians(T x1, T y1, T x2, T y2, T x3, T y3, T* median1, T* median2, T* median3) {
    T mx1 = (x2 + x3) / 2;
    T my1 = (y2 + y3) / 2;
    T mx2 = (x1 + x3) / 2;
    T my2 = (y1 + y3) / 2;
    T mx3 = (x1 + x2) / 2;
    T my3 = (y1 + y2) / 2;

    *median1 = sqrt(pow(x1 - mx1, 2) + pow(y1 - my1, 2));
    *median2 = sqrt(pow(x2 - mx2, 2) + pow(y2 - my2, 2));
    *median3 = sqrt(pow(x3 - mx3, 2) + pow(y3 - my3, 2));
}

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    double x1, y1, x2, y2, x3, y3;
    cout << "Введіть координати вершин трикутника (x1 y1 x2 y2 x3 y3): ";
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    double median1, median2, median3;
    calculateMedians(x1, y1, x2, y2, x3, y3, &median1, &median2, &median3);

    cout << "Медіана 1: " << median1 << endl;
    cout << "Медіана 2: " << median2 << endl;
    cout << "Медіана 3: " << median3 << endl;

    return 0;
}