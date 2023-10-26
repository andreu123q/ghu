#include <iostream> 
using namespace std;
int main()
{
	setlocale(0, "");
	int rub;
	int years;
	cout << "Введите сумму, которую желаете положить на сберегательный счет: ";
	cin >> rub;
	system("cls");
	cout << "Введите срок, на который желаете положить деньги (в годах): ";
	cin >> years;
	cout << "Через " << years << " года вы получите " << rub / 100 * 3 * years + rub << " рублей";
}