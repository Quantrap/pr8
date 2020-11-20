#include <iostream>
using namespace std;

int main()
{
    setlocale(NULL, "rus");
    int N, min = 0;
    cout << "Введите величину массива:";
    cin >> N;
    int* mass = new int[N];
    for (int i = 0; i < N; i++)
    {
        if (rand() % 2 == 1)
        {
            mass[i] = (rand() * -1) / 1000;
        }
        else mass[i] = rand() / 1000;
        if (mass[i] < min) min = mass[i];
        cout << mass[i] << " ";
    }
    for (int i = 0; i < N; i++)
    {
        if (mass[i] > min && mass[i] < 0) min = mass[i];
    }
    cout << "Отрицательный максимальный элемент = " << min << "\n";
    system("pause");
    return 0;
}
