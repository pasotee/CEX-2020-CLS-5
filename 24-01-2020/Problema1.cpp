// Problema: Se citeste un numar de la tastatura. Sa se afiseze suma cifrelor pare strict mai mari decat 4.

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int suma = 0;

    while (n > 0)
    {
        int cifra = n % 10;
        if (cifra > 4 && cifra % 2 == 0)
        {
            suma += cifra;
        }

        n = n / 10;
    }

    cout << suma << endl;

    return 0;
}