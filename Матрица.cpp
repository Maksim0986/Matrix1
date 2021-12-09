#include <iostream> 
#include <time.h>
#include <conio.h>

using namespace std;



int test1() {


	cout << "Задайте количество строк массива> ";
	int n;
	cin >> n;

	while ("") {

		if (n <= 0) {

			cout << "Неверно введено количество строк, введите еще раз" << endl;
			cin >> n;
		}
		else {

			break;
		}
	}

	int** p = new int* [n];
	int m;
	cout << "Задайте количество столбцов массива> ";
	cin >> m;
	while ("") {

		if (m <= 0) {

			cout << "Неверно введено количество столбцов, введите еще раз" << endl;
			cin >> m;
		}
		else {
			break;
		}
	}


	for (int i = 0; i < n; i++)
	{
		p[i] = new int[m];
	}
	cout << "Массив: " << endl;
	srand(time(NULL));
	int d;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			p[i][j] = rand() / 100;
			cout << p[i][j] << "\t";
		}
		cout << endl;
	}
	cout << " " << endl;
	cout << "Минимальный элемент для каждого столбца:" << endl;

	int max = -1;
	for (int j = 0; j < m; j++)

	{
		int MIN = p[0][j];

		for (int i = 0; i < n; i++)

		{

			if (MIN >= p[i][j])

			{

				MIN = p[i][j];

			}


		}

		if (MIN > max) {

			max = MIN;

		}
		cout << j + 1 << ": " << MIN << endl;

		cout << endl;
	}

	cout << "Максимум из всех минимальных элементов матрицы по столбцам: " << max << endl;
	cout << " " << endl;

	delete[] p;
	return 0;

}


int main() {

	setlocale(LC_ALL, "rus");
	cout << "Добро пожаловать!" << endl;
	cout << " " << endl;

	while ("") {

		while ("") {

			cout << "1. Запустить программу" << endl;
			cout << "2. Выйти из программы" << endl;
			cout << " " << endl;

			int l;
			cin >> l;

			switch (l) {

			case 1:

				test1();
				break;

			case 2:

				cout << "Выход из программы";
				_getch;
				return 0;
				break;

			default:

				cout << "Вы ввели неверный пункт меню, введите еще раз" << endl;
				_getch();
				break;
			}
		}
	}
}

