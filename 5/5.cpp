#include <iostream>
using namespace std;

int main()
{
	setlocale(NULL, "rus");
	int N, A, k = 2;
	double sum=0, h=0;
	cout << "Введите длину и ширину массива:";
	cin >> N >> A;
	int** mass = new int* [N];
	for (int i = 0; i < N; i++)
	{
		mass[i] = new int[A];
	}
	for (int i = 0; i < N; i++)
	{
		for (int g = 0; g < A; g++)
		{
			mass[i][g] = rand() / 1000;
			cout << mass[i][g] << "\t";
		}
		cout << "\n";
	}
	for (int i = N - 1; i > 0; i--)
	{
		for (int g = A - k; g >= 0; g--)
		{
			if (mass[i][g] % 2 == 0 && mass[i][g]!=0)
			{
				sum += mass[i][g];
				h++;
			}
		}
		k++;
	}
	cout << "Среднее арифметическое чётных элементов ниже главной диагонали = " << sum/h << "\n";
	system("pause");
	return 0;
}
