#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    int number;
    cout << "Введите число: ";
    cin >> number;

    int sum = 0;
    int product = 1;

    while (number > 0) {
        int digit = number % 10;
        sum += digit;
        product *= digit;
        number /= 10;
    }

    cout << "Сумма цифр числа: " << sum << endl;
    cout << "Произведение цифр числа: " << product << endl;

    return 0;
}
