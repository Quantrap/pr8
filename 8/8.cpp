﻿#include <iostream>
using namespace std;
int main()
{
    setlocale(NULL, "rus");
    int N, k = 0, k1 = 0,a,b;
    cout << "Введите величину массива:";
    cin >> N;
    int* mass = new int[N];
    cout << "\nВведите интервал a,b:";
    cin >> a >> b;
    for (int i = 0; i < N; i++)
    {
        mass[i] = rand() / 1000;
        cout << mass[i] << " ";
        if (mass[i] > b || mass[i] <  a) k++;
    }
    cout << "\n";
    if (k == N) cout << "В массиве нет чисел, входящих в заданный интервал!";
    else
    {
        int t;
        int* mass1 = new int[k];
        cout << "Изменённый массив:\n";
        for (int i = 0; i < N; i++)
        {
            if (mass[i] > b || mass[i] < a)
            {
                t = mass[i];
                mass1[k1] = t;
                cout << mass1[k1] << " ";
                k1++;
            }
        }
    }
    delete[]mass;
    system("pause");
}

