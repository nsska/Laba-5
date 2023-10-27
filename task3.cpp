#include<iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    int arr[] = {2, 4, 6, 8, 10};
    
    int sum = 0;
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    
    cout << "Сумма всех элементов массива: " << sum << endl;
    
    return 0;
}
