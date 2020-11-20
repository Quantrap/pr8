#include <iostream>
using namespace std;

int main()
{
    setlocale(NULL, "rus");
    int N, min, k;
    cout << "Введите величину массива:";
    cin >> N;
    int* mass = new int[N];
    for (int i = 0; i < N; i++)
    {
        mass[i] = rand() / 1000;
        if (i == 0)
        {
            min = mass[0];
            k = 0;
        }
        else if (mass[i] <= min)
        {
            min = mass[i];
            k = i;
        }
        cout << mass[i] << " ";
    }
    cout << "\nПоследний минимальный элемент под номером " << k + 1 << "\n";
    system("pause");
    return 0;
}
