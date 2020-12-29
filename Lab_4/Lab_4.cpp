
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	int num, i, a, j, k, m, ex;
	cout << "Введите кол-во элементов массива: ";
	cin >> num;

	int* arr = new int[num];
	for (i = 0; i < num; i++) {
		arr[i] = 1 + rand() % INT_MAX;
	}
	for (i = 0; i < num; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	cout << endl;

	cout << "Удалить все элеенты кратные 7  и после каждого нечетного элемента добавить 0: ";
	cout << endl;
	k = num--;
	for (i = 0; i < num; i++) {
		for (a = i; a < num; a++) {
			if (arr[i] % 7 == 0) {
				for (j = i; j < k; j++) {
					arr[j] = arr[j + 1];
				}
				arr[num] = 0;
			}
			else
				break;
		}
	}


	m = 0;
	
	for (i = 0; i < num; i++) {
		
			if (arr[i] % 2 != 0) {
				m++;
			}

	}
	
	
	ex = num + m;
	int* mur = new int[ex];
	for (i = 0; i < ex-1; i++) {
		mur[i] = 0;
	}
	mur = arr;

	k = ex - 1;
	for (j = 0; j < k; j++) {
		for (a = j; j < k; j++) {
			if (mur[j] % 2 != 0) {
				
				for (i = k; i > j; i--) {
					mur[i] = mur[i-1];
				}
				mur[j + 1] = 0;
				
			}
			break;
		}
	}
	for (i = 0; i < ex - 1; i++) {
		cout << mur[i] << " ";
	}

	delete[] mur;
	delete[] arr;
	return(0);
}