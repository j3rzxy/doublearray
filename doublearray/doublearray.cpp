#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
int main()
{
    SetConsoleCP(1251); SetConsoleOutputCP(1251);
    const int n = 2;
    const int m = 4;
    int sum = 0;
    int A[n][m] = { {-1, 2, 3, -8}, {4, 5, -6, 7 } };
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            sum += A[i][j];
        }
    }
    cout << "Сумма значений массива равна : " << sum << endl;
    int srz = sum / (n + m);
    cout << "Среднее значение массива равно : " << srz << endl;
    cout << "Положительные значения массива:" << endl;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (A[i][j] > 0) {
                cout << A[i][j] << endl;
            }
        }
    }
    cout << "Отрицательные значения массива:" << endl;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (A[i][j] < 0) {
                cout << A[i][j] << endl;
            }
        }
    }
    return 0;
}
