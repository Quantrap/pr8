#include <iostream>
using namespace std;

int main()
{
    setlocale(NULL, "rus");
    int N, a, b;
    cout << "Введите величину массива:";
    cin >> N;
    int* mass = new int[N];
    for (int i = 0; i < N; i++)
    {
        mass[i] = rand() / 1000;
        cout << mass[i] << " ";
    }
    cout << "\nВведите интервал a,b:";
    cin >> a >> b;
    for (int i = 0; i < N; i++)
    {
        if (mass[i] > b || mass[i] < a) cout << mass[i] << " ";
    }
    system("pause");
    return 0;
}
