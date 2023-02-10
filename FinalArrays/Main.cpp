#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

int main(){
	setlocale(LC_ALL, "Russian");
	int n, m;
	int sum;

	// Задача 1. Сортировка половины массива.
	/*std::cout << "Задача 1.\nИзначальный массив:\n";
	const int size1 = 10;
	int arr1[size1];
	srand(time(NULL));
	for (int i = 0; i < size1; i++) {
		arr1[i] = rand() % (10 + 1 - 1) + 1; // [1..10]
		std::cout << arr1[i] << ' ';
	}
	std::cout << std::endl;

	// Пузырьковая сортировка.
	//for (int i = 4; i > 0; i--)
	//	for (int j = 0; j < i; j++)
	//		if (arr1[j] > arr1[j + 1])
	//			std::swap(arr1[j], arr1[j + 1]);
	
	// Быстрая сортировка.
	std::sort(arr1, arr1 + 5);
	
	std::cout << "Итоговый массив:\n";
	for(int i = 0; i < size1; i++)
		std::cout << arr1[i] << ' ';
	std::cout << "\n\n";*/

	// Задача 2. Температура в январе. 
	/*std::cout << "Задача 2.\nТемпература за все дни января:\n";
	const int size2 = 31;
	int arr2[size2];
	srand(time(NULL));
	for (int i = 0; i < size2; i++) {
		arr2[i] = rand() % (-1 + 1 - (-30)) + (-30); // [-30,-1]
		//        rand() % 30 - 30;
		std::cout << arr2[i] << ", ";
	}
	std::cout << "\b\b.\n";
	
	sum = 0;			// Сумма для ср.арифмитического.
	int counter = 0;    // Количество дней для < n.
	std::cout << "Введите максимальную границу температуры ( от -30 до -1 ) -> ";
	std::cin >> n;
	for (int i = 0; i < size2; i++) {
		sum += arr2[i];
		if (arr2[i] < n)
			counter++;
	}
	std::cout << "Количество дней, когда температура опускалась ниже " << n << " градусов " << counter << '\n';
	std::cout << "Средняя температура за месяц: " << (double)sum / size2 << "\n\n";*/

	// Задача 3. Вхождение в диапазон.
	/*std::cout << "Задача 3.\nВведите начало диапазона -> ";
	std::cin >> n;
	std::cout << "Введите конец диапазона -> ";
	std::cin >> m;
	const int size3 = 20;
	int arr3[size3];
	srand(time(NULL));
	std::cout << "Вывод:\n";
	for (int i = 0; i < size3; i++) {
		arr3[i] = rand() % 101; // [0..100]
		if (arr3[i] > n && arr3[i] < m)
			std::cout << i + 1 << ". " << arr3[i] << "!\n";
		else
			std::cout << i + 1 << ". " << arr3[i] << '\n';
	}
	std::cout << std::endl;*/

	// Задача 4. 
	std::cout << "Задача 1.\nИзначальный массив:\n";
	const int size1 = 10;
	int arr1[size1];
	srand(time(NULL));
	for (int i = 0; i < size1; i++) {
		arr1[i] = rand() % 11; // [0..10]
		std::cout << arr1[i] << ' ';
	}
	std::cout << std::endl;

	// Пузырьковая сортировка.
	for (int i = 10; i < 0; i++)
		for (int j = 0; j < i; j++)
			if (arr1[j] < arr1[j + 1])
				std::swap(arr1[j], arr1[j + 1]);


	std::cout << "Итоговый массив:\n";
	for (int i = 0; i < 5; i++)
		std::cout << arr1[i] << ' ';
		std::cout << "\n\n"; 


	return 0;
	}
