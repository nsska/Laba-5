#include<iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    int number;
    
    cout << "Введите число: ";
    cin >> number;
    
    int count = 0;
    int temp = number;
    
    while (temp != 0) {
        temp /= 10;
        count++;
    }
    
    cout << "Количество цифр в числе: " << count << endl;
    
    return 0;
}
