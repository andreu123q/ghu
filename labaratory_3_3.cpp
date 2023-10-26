#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    const int size = 10;
    long long sum = 1;
    for (int i = 1; i <= size; i++)
        sum *= (i * (i + 1)) / 2;
    cout << sum << endl;
    return 0;
}