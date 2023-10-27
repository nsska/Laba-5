#include<iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(0, "");
    double a = 3, b = -4, c = 9, discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        double x1 = (-b + sqrt(discriminant)) / (2 * a);
        double x2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Два корня: x1 = " << x1 << ", x2 = " << x2 << endl;
    } else if (discriminant == 0) {
        double x = -b / (2 * a);
        cout << "Один корень: x = " << x << endl;
    } else {
        cout << "Нет корней." << endl;
    }
    
    return 0;
}
