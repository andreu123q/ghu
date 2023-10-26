#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    
    int p = 0;
    p++;
    for (int i = 5 - 1; i >= 0; i--) {
        for (int spc = 0; spc < i; spc++) {
            cout << "  ";
        }
        for (int a = 0; a < p; a++) {
            cout << "# ";
        }
        p += 2;
        cout << "\n";
    }
    for (int y = 0; y < 8; y++) {
        for (int x = 0; x < 9; x++) {
            cout << "# ";
        }
        cout << "\n";
    }
}
