#include<iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    const int size = 5;
    int arr[size];
    int sum = 0;
    
    cout << "Введите " << size << " чисел: " << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    
    double average = sum / size;
    cout << "Среднее арифметическое: " << average << endl;
    
    return 0;
}
