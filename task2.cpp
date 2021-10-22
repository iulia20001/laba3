#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    setlocale(LC_ALL, "Russian");
    int n;
    int num = 0;
    int i = 0;
    int counter_negative = 0, counter_positive = 0, counter_zero = 0;
    cout << "Введите n: ";
    cin >> n;
    while (i < n)
    {
        cout << "Введите число: ";
        cin >> num ;
        if (num > 0) counter_positive++;
        if (num < 0) counter_negative++;
        if (num == 0) counter_zero++;
        i++;
    }
    cout << "Положительных: " << counter_positive << endl;
    cout << "Отрицательных: " << counter_negative << endl;
    cout << "Нулевых: " << counter_zero << endl;
}