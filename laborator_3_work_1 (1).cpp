#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");

	int input;
	cout << "Выберите меру длины для перевода \n[1] Сажни в метры\n[2] Дюймы в сантиметры\n[3] Футы в метры \n[4] Драхм в граммы \n[5] Унций в граммы \n[6] Фунты в килограмы \n[7] Аршины в метры \n[8] Золотники в граммы \n[9] Дюймы в милиметры \nВвод: ";
	cin >> input;
	switch (input) {
	case 1:
		cout << "Введите число для перевода в метры: ";
		cin >> input;
		cout << input * 2.1366 << " м";
	case 2:
		cout << "Введите число для перевода в сантиметры: ";
		cin >> input;
		cout << input * 2.5 << " см";
	case 3:
		cout << "Введите число для перевода в метры: ";
		cin >> input;
		cout << input * 0.3048 << " м";
	case 4:
		cout << "Введите число для перевода в граммы: ";
		cin >> input;
		cout << input * 3.7325 << " г";
	case 5:
		cout << "Введите число для перевода в граммы: ";
		cin >> input;
		cout << input * 29.86 << " г";
	case 6:
		cout << "Введите число для перевода в килограммы: ";
		cin >> input;
		cout << input * 0.40951 << " г";
	case 7:
		cout << "Введите число для перевода в метры: ";
		cin >> input;
		cout << input * 0.7112 << " м";
	case 8:
		cout << "Введите число для перевода в граммы: ";
		cin >> input;
		cout << input * 4.2657 << " г";
	case 9:
		cout << "Введите число для перевода в милиметры: ";
		cin >> input;
		cout << input * 25.3995 << " мм";
	}

	return 0;
}