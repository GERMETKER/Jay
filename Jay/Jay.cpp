#include <Windows.h>
#include <iostream>
#include <random>
#include <cstdlib>
template <typename T1, typename T2, typename T3>
void Yb(T1 arr[], T2 size, T3 srow)
{
	for (int i = 0; i < size - 1; i++)
	{
		if (arr[i] < arr[i + 1])
		{
			int at1 = arr[i];
			int at2 = arr[i + 1];
			arr[i] = at2;
			arr[i + 1] = at1;
		}
	}
	if (arr[0] > arr[1] && arr[1] > arr[2] && arr[2] > arr[3] && arr[3] > arr[4] && arr[4] > arr[5] && arr[5] > arr[6] && arr[6] > arr[7] && arr[7] > arr[8] && arr[8] > arr[9])
	{
		for (int i = 0; i < size; i++)
		{
			std::cout << arr[i] << "\n";
		}
	}
	else 
	{
		(arr, size, srow);
	}
}
template <typename T1, typename T2, typename T3>
void Vozr(T1 arr[], T2 size, T3 srow)
{
	for (int i = 0; i < size - 1; i++)
	{
		if (arr[i] > arr[i + 1])
		{
			int at1 = arr[i];
			int at2 = arr[i + 1];
			arr[i] = at2;
			arr[i + 1] = at1;
		}
	}
	if (arr[0] < arr[1] && arr[1] < arr[2] && arr[2] < arr[3] && arr[3] < arr[4] && arr[4] < arr[5] && arr[5] < arr[6] && arr[6] < arr[7] && arr[7] < arr[8] && arr[8] < arr[9])
	{
		for (int i = 0; i < size; i++)
		{
			std::cout << arr[i] << "\n";
		}
	}
	else
	{
		Vozr(arr, size, srow);
	}
	

}
template <typename T1, typename T2, typename T3>
void Sum(T1 arr[], T2 size, T3 srow)
{
	int answ;
	std::cout << "Выберите как хотите заполнить массив(1 - заполнить случайными числами, 2 - заполнить самостоятельно)\n";
	std::cin >> answ;
	if (answ == 1)
	{
		for (int i = 0; i < size; i++)
		{
			arr[i] = rand() % 100;
		}
		for (int i = 0; i < size; i++)
		{
			std::cout << arr[i] << "\n";
		}
	}
	else
	{
		for (int i = 0; i < size; i++)
		{
			int word;
			std::cout << "Введите число для заполения массива\n";
			std::cin >> arr[i];
		}
		for (int i = 0; i < size; i++)
		{
			std::cout << arr[i] << "\n";
		}
	}
	int choise = 0;
	std::cout << "Выберите как сортировать массив(true - по убыванию, false - по возрастанию)\n";
	std::cout << "1 - True, 2 - False\n";
	std::cin >> choise;
	if (choise == 1)
	{
		Yb(arr, size, srow);
	}
	//arr[0] > arr[1] && arr[1] > arr[2] && arr[2] > arr[3] && arr[3] > arr[4] && arr[4] > arr[5] && arr[5] > arr[6] && arr[6] > arr[7] && arr[7] > arr[8] && arr[8] > arr[9]
	else if (choise == 2)
	{
		Vozr(arr, size, srow);
	}
}
	
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	const int size = 10;
	float arr[size];
	bool srow = true;
	Sum(arr, size, srow);
	return 0;
}