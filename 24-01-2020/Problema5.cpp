// Problema: Se citeste un numar de la tastura. Sa se elimine cifrele impare ale acestuia.

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int rezultat = 0;
    int ordin = 1;

    while (n > 0)
    {
        int cifra = n % 10;
        if (cifra % 2 == 0)
        {
            rezultat = cifra * ordin + rezultat;
            ordin = ordin * 10;
        }

        n = n / 10;
    }

    cout << rezultat << endl;

    return 0;
}