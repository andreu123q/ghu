#include <iostream>
using namespace std;

int main() {
    setlocale(0, "");
    int number;
    int sum = 0, count = 0;
    cin >> number;

    while (number != 0) {
        sum += number;
        count++;
        cin >> number;
    }



    cout << "Количество чисел: " << count << endl;
    cout << "Сумма чисел: " << sum << endl;
    cout << "Среднее арифметическое: " << sum / count << endl;

    return 0;
}