
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	int n, i, k, j, a, min, minI;
	int arr[100];

	for (i = 0; i < 100; i++) {
		arr[i] = rand() % 100 -50;
	}
	cout << "Данн массив: ";
	cout << endl;
	for (i = 0; i < 100; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	cout << endl;

	
	//удалить все четные
	cout << "Удалить все четные элементы массива: ";
	cout << endl;
	for (i = 0; i < 100; i++) {
		for (a = i; a < 100; a++) {
			if (arr[i] % 2 == 0) {
				for (j = i; j < 99; j++) {
					arr[j] = arr[j + 1];
				}
				arr[99] = 0;
			}
			else
				break;
		}
	}
		for (i = 0; i < 100; i++) {
		cout << arr[i] << " ";
	 }
		cout << endl;
		cout << endl;
	

		for (i = 0; i < 100; i++) {
			arr[i] = rand() % 100 - 50;
		}
	//первый четный
		cout << "Вывести первый четный элемент: ";
		cout << endl;
	for (i = 0; i < 100; i++) {
		if (arr[i] % 2 == 0) {
			cout << arr[i];
			break;
		}

	}
	cout << endl;
	cout << endl;

	
	for (i = 0; i < 100; i++) {
		arr[i] = rand() % 100 - 50;
	}
	//четные элементы переставить в начало массива
	cout << "Переставить четные элементы в начало массива: ";
	cout << endl;
	n = 0;
	for (i = 0; i < 100; i++) {
		for (a = i; a < 100; a++) {
			if (arr[i] % 2 == 0) {
				n = arr[i];
				for (j = i; j > 0 ; j--) {
					arr[j] = arr[j - 1];
				}
				arr[0] = n;
			}
			else
				break;
		}
	}
	for (i = 0; i < 100; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	cout << endl;


	for (i = 0; i < 100; i++) {
		arr[i] = rand() % 100 - 50;
	}
	//добавить К элементов в начало массива
	cout << "Добавить К элементов в начало массива: ";
	cout << endl;
	cout << "Введите кол-во элементов К(не больше 100): ";
	cin >> k;
	for (j = 0; j < k; j++) {
		for (i = 99; i > 0; i--) {
			arr[i] = arr[i - 1];	
		}
		cout << "Введите элемент: ";
		cin >> arr[j];
	}
	for (i = 0; i < 100; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	cout << endl;


	for (i = 0; i < 100; i++) {
		arr[i] = rand() % 100 - 50;
	}
	//сортировка с помощью простого выбора
	cout << "Произвести сортировку с помощью простого выбора: ";
	cout << endl;
	for (j = 0; j < 100; j++) {
		min = INT_MAX;
		for (i = j; i < 100; i++) {
			if (arr[i] < min) {
				min = arr[i];
				minI = i;
			}
		}
		arr[minI] = arr[j];
		arr[j] = min;
	}
	for (i = 0; i < 100; i++) {
		cout << arr[i] << " ";
	}

	return(0);
}
